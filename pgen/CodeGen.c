/* This file is what generates the yacc code that will */
/* convert the tiny.parse inputted to it, into a yaccable */
/* file that will become the actual parser. */
#define MYDEBUG 0
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "Tokenizer.h"
#include "y.tab.h"
#include "Nonterminals.h"
#include "GenericTrees.h"
#include "Trees.h"
#include "SymbolTable.h"

static void VisitEach(FILE *f, TREENODE *node, int skip);
static char buffer[1024];
static int bn = 0;

extern NAME *terminals[];
extern NAME *nonterminals[];

void Actions(FILE *f, TREENODE *node, char *s, int *n, int *ft);
void rule_code(FILE *f, TREENODE *kid, TREENODE *lhs, int *n);

int firstrule;

/* Do the actuall code generation here! */
void CodeGen(FILE *f, TREENODE *node, int skip)
{
    TREENODE *kid;
    int rval;
    TREENODE *action, *lhs;
    int n;

    switch (node->token) {
    case t_def:
	break;
    case t_rules:
	firstrule = 1;
	fprintf(f,
		"%%{\n"
		"#include <stdio.h>\n"
		"#include <assert.h>\n"
		"#include <stdlib.h>\n"
		"#include <DLists.h>\n"
		"#include <Tokenizer.h>\n"
		"#include <Trees.h>\n"
		"\n"
		"extern TREENODE *root;\n"
		"typedef struct {\n"
		"    DNODE mynode;\n"
		"    TREENODE *nodeptr;\n"
		"} T_NODE;\n"
		"\n"
		"%%}\n"
		"%%union {\n"
		"   TOKEN_INFO info;\n"
		"   DLIST dlist;\n"
		"}\n");
	PrintTable(f,"%token <info> ",terminals);
	PrintTable(f,"%type <dlist>",nonterminals);
	fprintf(f,"%%%%\n\n");
	VisitEach(f,node,0);
	break;
    case t_rule:
	CodeGen(f,GetChild(node,1),0);
	CodeGen(f,GetChild(node,2),1);

	lhs = GetChild(node,1);
	n = 1;
	kid = GetChild(node,2);
	rule_code(f,kid,lhs,&n);

	kid = GetChild(node,3);
	while (kid != 0) {
	    CodeGen(f,kid,0);
	    n = 1;
	    rule_code(f,kid,lhs,&n);
	    kid = NextSibling(kid);
	}
	fprintf(f,"         ;\n\n");
	firstrule = 0;
	break;
    case PLUS:
    case STAR:
    case QUESTION:
    case PIPE:
    case LIST:
	assert(0);
	break;
    case OR:
	if (skip)
	    fprintf(f,": ");
	else
	    fprintf(f,"         | ");
	CodeGen(f,GetChild(node,1),0);
    case ACTION:
	break;
    case IDENTIFIER:
    case STRING:
    case LITERAL:
	fprintf(f,"%-8s ",node->string);
	break;
    default:
	VisitEach(f,node,0);
	break;
    }

}

/* This generates the yacc code to parse a given rule. */
void rule_code(FILE *f, TREENODE *kid, TREENODE *lhs, int *n)
{
    TREENODE *action;
    int ft;

    fprintf(f,"\n             {\n");
    fprintf(f,"\t\tDLIST r;\n");

    if (ChildCount(kid) > 1) {
	action = GetChild(kid,3);
	fprintf(f,"\t\tT_NODE *t;\n"
		  "\n"
	          "\t\tInitDList(&r);\n"
		  "\n");
	ft=0;
	Actions(f,kid,action->string,n,&ft);

	fprintf(f,"\t\tt = (T_NODE *)malloc(sizeof(T_NODE));\n"
		  "\t\tassert(t);\n"
		  "\t\tt->nodeptr = AllocTreeNode(TREETAG_STRING,%s,\n",
		  action->string);
	if (ft>0)
	fprintf (f, "\t\t                                TREETAG_LINE,$%d.line,\n"
		  "\t\t                                TREETAG_COLUMN,$%d.column,\n",
		  ft, ft);
	fprintf (f, "\t\t                           TREETAG_DONE);\n"
                  "\t\twhile (DCount(&r) > 0) {\n"
		  "\t\t    T_NODE *t3 = DRemHead(&r);\n"
		  "\t\t    AddChild(t->nodeptr,t3->nodeptr);\n"
                  "\t\t    free(t3);\n"
                  "\t\t}\n"
		  "\t\tDAddTail(&r,&t->mynode);\n");

	if (firstrule) {
	    fprintf(f,"\t\tt->mynode = *(DHead(&r));\n");
	    fprintf(f,"\t\troot = t->nodeptr;\n");
	}
	else
	    fprintf(f,"\t\t$$ = r;\n");
	}
    else {
	fprintf(f,"\n"
		  "\t\tInitDList(&r);\n"
		  "\n");
	Actions(f,kid,0,n,&ft);
	fprintf(f,"\t\t$$ = r;\n");
    }
    fprintf(f,"\n             }\n");
}

/* Here we make sure that we visit each node of the tree. */
static void VisitEach(FILE *f, TREENODE *node, int skip)
{

    TREENODE *kid;

    kid = GetChild(node,1);
    while (kid != 0) {
	CodeGen(f,kid,skip);
	kid = NextSibling(kid);
    }
}

/* This generates the yacc code to parse a given action */
void Actions(FILE *f, TREENODE *node, char *s, int *n, int *ft)
{
    TREENODE *kid;
    TREENODE *action;

    switch (node->token) {
    case PLUS:
    case STAR:
    case QUESTION:
    case PIPE:
    case LIST:
	assert(0);
	break;
    case IDENTIFIER:
	if (Lookup(nonterminals,node->string)) {
	    fprintf(f,"\t\twhile (DCount(&$%d) > 0)\n"
		      "\t\t    DAddTail(&r,DRemHead(&$%d));\n"
		      "\n",
		    *n,*n);
	    *n += 1;
	}
	else if (Lookup(terminals,node->string)) {
	    fprintf(f,"\t\tif ($%d.makenode) {\n"
		      "\t\t    T_NODE *t2;\n"
                      "\t\t    t2 = (T_NODE *)malloc(sizeof(T_NODE));\n"
		      "\t\t    assert(t2);\n"
		      "\t\t    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$%d.string,\n"
		      "\t\t                                TREETAG_LINE,$%d.line,\n"
		      "\t\t                                TREETAG_COLUMN,$%d.column,\n"
		      "\t\t                                TREETAG_DONE);\n"
		      "\t\t    DAddTail(&r,&t2->mynode);\n"
		      "\t\t}\n"
		      "\n",
		    *n,*n,*n,*n);
	    if (*ft==0) *ft=*n; *n += 1; 
	}
	else {
#if MYDEBUG
        printf("FAILED LOOKING UP STRING %s\n",node->string);
#endif
	    assert(0); }
	break;
    case LITERAL:
	*n += 1;
	break;
    case t_empty:
	break;
    default:
	kid = GetChild(node,1);
	while (kid != 0) {
	    Actions(f,kid,s,n,ft);
	    kid = NextSibling(kid);
	}
	break;
    }

}
