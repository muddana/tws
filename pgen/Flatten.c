#define MYDEBUG 0
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "Tokenizer.h"
#include "y.tab.h"
#include "Nonterminals.h"
#include "GenericTrees.h"
#include "Trees.h"
#include "SymbolTable.h"

static TREENODE *FindNode(TREENODE *node, int token, int *child);
static void MakePrime(TREENODE *prime);
static TREENODE *FindAlpha(TREENODE *node);
static TREENODE *FindGamma(TREENODE *node);
static TREENODE *TrimTree(TREENODE *node);
static void FirstThree(TREENODE *node);
static void Plus(TREENODE *alpha, TREENODE *beta, TREENODE *gamma,
		 TREENODE *prime, TREENODE *or, TREENODE *or1, TREENODE *or2);
static void Star(TREENODE *alpha, TREENODE *beta, TREENODE *gamma,
		 TREENODE *prime, TREENODE *or, TREENODE *or1, TREENODE *or2);
static void Question(TREENODE *alpha, TREENODE *beta, TREENODE *gamma,
		     TREENODE *prime, TREENODE *or, TREENODE *or1, TREENODE *or2);
static void Pipe(TREENODE *node);
static void List(TREENODE *node);

extern NAME *terminals[];
extern NAME *nonterminals[];

extern int debug_flatten;

int Flatten(TREENODE *node)
{
    TREENODE *kid;
    int rval;

    extern TREENODE *root;

    switch (node->token) {
    case t_rule:
	kid = GetChild(node,1);
	while (kid != 0) {
	    if (Flatten(kid)) {
		if (debug_flatten) {
		    PrintRawTree(stdout,root);
		    fflush(stdout);
		}
		kid = GetChild(node,1);
	    }
	    else
		kid = NextSibling(kid);
	}
	return 0;
	break;
    case PLUS:
    case STAR:
    case QUESTION:
	if (debug_flatten) {
	    printf("found: %s\n",node->string);
	    fflush(stdout);
	}
	FirstThree(node);
	return 1;
	break;
    case PIPE:
	if (debug_flatten) {
	    printf("found: %s\n",node->string);
	    fflush(stdout);
	}
	Pipe(node);
	return 1;
	break;
    case LIST:
	if (debug_flatten) {
	    printf("found %s\n",node->string);
	    fflush(stdout);
	}
	List(node);
	return 1;
	break;
    default:
	kid = GetChild(node,1);
	while (kid != 0) {
	    if (Flatten(kid))
		return 1;
	    kid = NextSibling(kid);
	}
	return 0;
	break;
    }

    return 0;

}

static void FirstThree(TREENODE *node)
{
    TREENODE *rules, *rule, *prime, *t, *or1, *or2, *or;
    TREENODE *alpha, *gamma, *beta;
    int childnum;

    or = FindNode(node,OR,&childnum);
    assert(or);

    rules = FindNode(node,t_rules,&childnum);
    assert(rules);
	    
    rule = GetChild(rules,childnum);
    prime = DuplicateNode(GetChild(rule,1));
    MakePrime(prime);
    
    t = AllocTreeNode(TREETAG_TOKEN,t_rule,
		      TREETAG_STRING,"rule",
		      TREETAG_DONE);

    AddNthChild(rules,t,childnum+1);

    or1 = DuplicateNode(or);
    or2 = DuplicateNode(or);
    AddChildren(t,prime,or1,or2,NULL);

    alpha = FindAlpha(node);

    assert(ChildCount(node) == 1);
    beta = GetChild(node,1);
    gamma = FindGamma(node);

    if (alpha != NULL)
	UnlinkTree(alpha);

    UnlinkTree(beta);
    UnlinkTree(node);

    if (gamma != NULL) {
	UnlinkTree(gamma);
	gamma = TrimTree(gamma);
    }

    switch (node->token) {
    case PLUS:
	Plus(alpha, beta, gamma, prime, or, or1, or2);
	break;
    case STAR:
	Star(alpha, beta, gamma, prime, or, or1, or2);
	break;
    case QUESTION:
	Question(alpha, beta, gamma, prime, or, or1, or2);
	break;
    default:
	assert(0);
	break;
    }
}


static void Plus(TREENODE *alpha, TREENODE *beta, TREENODE *gamma,
		 TREENODE *prime, TREENODE *or, TREENODE *or1, TREENODE *or2)
{
    TREENODE *cat, *dcat;

    cat = AllocTreeNode(TREETAG_TOKEN,t_catenate,
			TREETAG_STRING,"catenate",
			TREETAG_DONE);

    if (alpha) {
	dcat = DuplicateNode(cat);
	AddChildren(dcat,DuplicateTree(alpha),DuplicateNode(prime),NULL);
	AddNthChild(or,dcat,1);
    }
    else
	AddNthChild(or,DuplicateNode(prime),1);

    if (gamma) {
	dcat = DuplicateNode(cat);
	AddChildren(dcat,DuplicateTree(beta),DuplicateTree(gamma),NULL);
	AddNthChild(or1,dcat,1);
    }
    else
	AddNthChild(or1,DuplicateTree(beta),1);
    
    dcat = DuplicateNode(cat);
    AddChildren(dcat,DuplicateTree(beta),DuplicateNode(prime),NULL);
    AddNthChild(or2,dcat,1);

    FreeTreenodeTree(cat);
}

static void Star(TREENODE *alpha, TREENODE *beta, TREENODE *gamma,
		 TREENODE *prime, TREENODE *or, TREENODE *or1, TREENODE *or2)
{
    TREENODE *cat, *dcat, *empty;

    cat = AllocTreeNode(TREETAG_TOKEN,t_catenate,
			TREETAG_STRING,"catenate",
			TREETAG_DONE);

    if (alpha) {
	dcat = DuplicateNode(cat);
	AddChildren(dcat,DuplicateTree(alpha),DuplicateNode(prime),NULL);
	AddNthChild(or,dcat,1);
    }
    else
	AddNthChild(or,DuplicateNode(prime),1);

    if (gamma) {
	AddNthChild(or1,DuplicateTree(gamma),1);
    }
    else {
	empty = AllocTreeNode(TREETAG_TOKEN,t_empty,
			      TREETAG_STRING,"empty",
			      TREETAG_DONE);
	AddNthChild(or1,empty,1);
    }
    
    dcat = DuplicateNode(cat);
    AddChildren(dcat,DuplicateTree(beta),DuplicateNode(prime),NULL);
    AddNthChild(or2,dcat,1);

    FreeTreenodeTree(cat);
}

static void Question(TREENODE *alpha, TREENODE *beta, TREENODE *gamma,
		     TREENODE *prime, TREENODE *or, TREENODE *or1, TREENODE *or2)
{
    TREENODE *cat, *dcat, *empty;

    cat = AllocTreeNode(TREETAG_TOKEN,t_catenate,
			TREETAG_STRING,"catenate",
			TREETAG_DONE);

    if (alpha) {
	dcat = DuplicateNode(cat);
	AddChildren(dcat,DuplicateTree(alpha),DuplicateNode(prime),NULL);
	AddNthChild(or,dcat,1);
    }
    else
	AddNthChild(or,DuplicateNode(prime),1);

    if (gamma) {
	AddNthChild(or1,DuplicateTree(gamma),1);
    }
    else {
	empty = AllocTreeNode(TREETAG_TOKEN,t_empty,
			      TREETAG_STRING,"empty",
			      TREETAG_DONE);
	AddNthChild(or1,empty,1);
    }
    
    if (gamma) {
	dcat = DuplicateNode(cat);
	AddChildren(dcat,DuplicateTree(beta),DuplicateTree(gamma),NULL);
	AddNthChild(or2,dcat,1);
    }
    else
	AddNthChild(or2,DuplicateTree(beta),1);

    FreeTreenodeTree(cat);
}

static void List(TREENODE *node)
{
    TREENODE *rules, *rule, *prime, *t, *or1, *or2, *or;
    TREENODE *alpha, *gamma, *beta1, *beta2;
    TREENODE *cat, *dcat, *dcat2;

    int childnum;

    or = FindNode(node,OR,&childnum);
    assert(or);

    rules = FindNode(node,t_rules,&childnum);
    assert(rules);
	    
    rule = GetChild(rules,childnum);
    prime = DuplicateNode(GetChild(rule,1));
#if MYDEBUG
    printf("ABOUT TO CALL MAKEPRIME\n");
#endif
    MakePrime(prime);
#if MYDEBUG
    printf("DONE CALLING MAKEPRIME\n");
#endif
    
    t = AllocTreeNode(TREETAG_TOKEN,t_rule,
		      TREETAG_STRING,"rule",
		      TREETAG_DONE);

    AddNthChild(rules,t,childnum+1);

    or1 = DuplicateNode(or);
    or2 = DuplicateNode(or);
    AddChildren(t,prime,or1,or2,NULL);

    alpha = FindAlpha(node);

    assert(ChildCount(node) == 2);
    beta2 = GetChild(node,1);
    beta1 = GetChild(node,2);
    gamma = FindGamma(node);

    if (alpha != NULL)
	UnlinkTree(alpha);

    UnlinkTree(beta1);
    UnlinkTree(beta2);
    UnlinkTree(node);

    if (gamma != NULL) {
	UnlinkTree(gamma);
	gamma = TrimTree(gamma);
    }


    cat = AllocTreeNode(TREETAG_TOKEN,t_catenate,
			TREETAG_STRING,"catenate",
			TREETAG_DONE);

    if (alpha) {
	dcat = DuplicateNode(cat);
	AddChildren(dcat,DuplicateTree(alpha),DuplicateNode(prime),NULL);
	AddNthChild(or,dcat,1);
    }
    else
	AddNthChild(or,DuplicateNode(prime),1);


    if (gamma) {
	dcat = DuplicateNode(cat);
	AddChildren(dcat,DuplicateTree(beta1),DuplicateTree(gamma),NULL);
	AddNthChild(or1,dcat,1);
    }
    else {
	AddNthChild(or1,DuplicateTree(beta1),1);
    }

    dcat = DuplicateNode(cat);
    AddChildren(dcat,DuplicateTree(beta1),DuplicateTree(beta2),NULL);
    dcat2 = DuplicateNode(cat);
    AddChildren(dcat2,dcat,DuplicateNode(prime),NULL);
    AddNthChild(or2,dcat2,1);
}


static void Pipe(TREENODE *node)
{
    TREENODE *rules, *rule, *prime, *t, *or1, *or;
    TREENODE *alpha, *gamma, *beta1, *beta2;
    TREENODE *cat, *dcat, *dcat2;
    int i, nkids;

    int childnum;

    or = FindNode(node,OR,&childnum);
    assert(or);

    rule = FindNode(node,t_rule,&childnum);
    assert(rule);
	    
    or1 = DuplicateNode(or);
    AddNthChild(rule,or1,childnum+1);
    

    nkids = ChildCount(or);
    for (i=2; i <= nkids; i++) {
	t = DuplicateTree(GetChild(or,i));
	AddChild(or1,t);
    }

    alpha = FindAlpha(node);

    if (ChildCount(node) == 2) {
	beta1 = GetChild(node,1);
	beta2 = GetChild(node,2);
    }
    else {
	beta1 = GetChild(node,1);
	beta2 = AllocTreeNode(TREETAG_TOKEN,t_empty,
			      TREETAG_STRING,"empty",
			      TREETAG_DONE);
    }

    gamma = FindGamma(node);

    if (alpha != NULL)
	UnlinkTree(alpha);

    UnlinkTree(beta1);
    UnlinkTree(beta2);
    UnlinkTree(node);

    if (gamma != NULL) {
	UnlinkTree(gamma);
	gamma = TrimTree(gamma);
    }

    cat = AllocTreeNode(TREETAG_TOKEN,t_catenate,
			TREETAG_STRING,"catenate",
			TREETAG_DONE);

    if (alpha && gamma) {
	dcat = DuplicateNode(cat);
	AddChildren(dcat,DuplicateTree(alpha),DuplicateTree(beta1),NULL);
	dcat2 = DuplicateNode(cat);
	AddChildren(dcat2,dcat,DuplicateTree(gamma),NULL);
	AddNthChild(or,dcat2,1);
    }
    else if (alpha) {
	dcat = DuplicateNode(cat);
	AddChildren(dcat,DuplicateTree(alpha),DuplicateTree(beta1),NULL);
	AddNthChild(or,dcat,1);
    }
    else if (gamma) {
	dcat = DuplicateNode(cat);
	AddChildren(dcat,DuplicateTree(beta1),DuplicateTree(gamma),NULL);
	AddNthChild(or,dcat,1);
    }
    else {
	AddNthChild(or,DuplicateTree(beta1),1);
    }

    if (alpha && gamma) {
	dcat = DuplicateNode(cat);
	AddChildren(dcat,DuplicateTree(alpha),DuplicateTree(beta2),NULL);
	dcat2 = DuplicateNode(cat);
	AddChildren(dcat2,dcat,DuplicateTree(gamma),NULL);
	AddNthChild(or1,dcat2,1);
    }
    else if (alpha) {
	dcat = DuplicateNode(cat);
	AddChildren(dcat,DuplicateTree(alpha),DuplicateTree(beta2),NULL);
	AddNthChild(or1,dcat,1);
    }
    else if (gamma) {
	dcat = DuplicateNode(cat);
	AddChildren(dcat,DuplicateTree(beta2),DuplicateTree(gamma),NULL);
	AddNthChild(or1,dcat,1);
    }
    else {
	AddNthChild(or1,DuplicateTree(beta2),1);
    }

	
	
	
}



static TREENODE *FindNode(TREENODE *node, int token, int *child)
{
    TREENODE *parent = GetParent(node);

    while (parent != 0) {
	if (parent->token == token) {
	    *child = GetChildNum(node);
	    return parent;
	}
	node = parent;
	parent = GetParent(parent); 
    }
    return 0;
}

static void MakePrime(TREENODE *prime)
{
    char *s1 = 0, *s2 = 0;

#if MYDEBUG
    printf("ENTERING MakePrime, prime = %s\n",prime->string);
#endif
    assert(prime->string);
    s1=malloc(strlen(prime->string)+1);
    assert(s1);
    strcpy(s1,prime->string);
#if MYDEBUG
    printf("COPYING prime to s1. s1 = %s\n",s1);
#endif

    do {
	if (s2)
	    free(s2);
	s2 = malloc(strlen(s1)+3);
	assert(s2);
	strcpy(s2,s1);
#if MYDEBUG
    printf("COPYING s1 to s2. s2 = %s\n",s2);
#endif
	strcat(s2,"_1");
	free(s1);
        s1=malloc(strlen(s2)+1);
        assert(s1);
        strcpy(s1,s2);
    } while (Lookup(nonterminals,s2));
    
#if MYDEBUG
    printf("ABOUT TO CALL INSERT string s2 = %s\n",s2);
#endif
    Insert(nonterminals,s2);
#if MYDEBUG
    printf("DONE CALLING INSERT\n");
#endif
    prime->string = s2;
}


static TREENODE *FindAlpha(TREENODE *node)
{
    TREENODE *firstchild;
    TREENODE *parent = GetParent(node);
    assert(parent);

    while (parent->token != OR) {
	firstchild = GetChild(parent,1);
	if (firstchild != node)
	    return firstchild;
	
	node = parent;
	parent = GetParent(node);
    }

    return 0;

}

static TREENODE *FindGamma(TREENODE *node)
{
    TREENODE *firstchild;
    TREENODE *parent = GetParent(node);
    assert(parent);

    if (parent->token == OR)
	return 0;

    while (parent->token != OR) {
	node = parent;
	parent = GetParent(node);
    }

    if (GetChildNum(node) == 1)
	return node;
    else 
	return 0;

}

static TREENODE *TrimTree(TREENODE *node)
{
    TREENODE *kid;
    int nkids;
    int i;

    nkids = ChildCount(node);
    for (i=nkids; i>0; i--) {
	kid = GetChild(node,i);
	UnlinkTree(kid);
	kid = TrimTree(kid);
	if (kid)
	    AddNthChild(node,kid,i);
    }

    
    switch (node->token) {
    case t_catenate:
	if (ChildCount(node) == 0) {
	    FreeTreenodeTree(node);
	    return 0;
	}
	else if (ChildCount(node) == 1) {
	    kid = GetChild(node,1);
	    UnlinkTree(kid);
	    FreeTreenodeTree(node);
	    return kid;
	}
	break;
    }
    return node;
}

