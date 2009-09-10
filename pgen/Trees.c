/* This file is what actually creates the tree */
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdarg.h>
#include <stdlib.h>
#include "Trees.h"
#include "Tokenizer.h"
#include "y.tab.h"

/* Here is where we allocate space and assign it to the tree node */
/* There is also some validation of the tree tags that are being made */
/* However this validation is not as wrote as the TreeCheck function. */
TREENODE *AllocTreeNode(int firsttag, ...)
{
    TREENODE *tmp;
    va_list ap;
    int tag, n;
    char *s;
    
    tmp = malloc(sizeof(TREENODE));
    assert(tmp);
    InitTNode(tmp);

    /* defaults */

    tmp->token = 0;
    tmp->line = 0;
    tmp->column = 0;
    tmp->string = NULL;

    va_start(ap,firsttag);
    
    tag = firsttag;
    while (tag != TREETAG_DONE) {
    
        switch(tag) {
        case TREETAG_TOKEN:
	    tmp->token = va_arg(ap,int);
            break;
        case TREETAG_LINE:
            tmp->line = va_arg(ap,int);
            break;
        case TREETAG_COLUMN:
            tmp->column = va_arg(ap,int);
            break;
	case TREETAG_STRING:
	    s = va_arg(ap,char *);
	    assert(s);
	    tmp->string = strdup(s);
	    assert(tmp->string);
	    break;
        default:
            assert(0); /* unknown tag */
            break;
        }
        
        tag = va_arg(ap,int);
        
    }
    
    va_end(ap);
    return tmp;

}

/* Here we can modify a tree node if necissicary. */
void ModifyTreeNode(TREENODE *node, int firsttag, ...)
{
    va_list ap;
    int tag, n;

    assert(node != NULL);
    
    va_start(ap,firsttag);
    
    tag = firsttag;
    while (tag != TREETAG_DONE) {
    
        switch(tag) {
        case TREETAG_TOKEN:
	    node->token = va_arg(ap,int);
            break;
        case TREETAG_LINE:
            node->line = va_arg(ap,int);
            break;
        case TREETAG_COLUMN:
            node->column = va_arg(ap,int);
            break;
	case TREETAG_STRING:
	    if (node->string != NULL)
		free(node->string);

	    node->string = va_arg(ap,char *);
	    break;
        default:
            assert(0); /* unknown tag */
            break;
        }
        
        tag = va_arg(ap,int);
        
    }
    
    va_end(ap);

}

/* Writes node information out to a file */
static void pf(FILE *f, void *t, int tab)
{
    TREENODE *tnode = t;

    fprintf(f,"%s[%x]\n",tnode->string,tnode->string);
}

/* This prints the tree out for degugging purposes. */
void PrintRawTree(FILE *f, TREENODE *node)
{
    if (node == NULL)
	return;

    PrintTree(f,node,0,"| ",(void (*)(FILE *, void *, int))pf);
}

/* Properly destroy unused space. */
static void release(void *node)
{
    TREENODE *t = node;
    if (t->string != 0)
	free(t->string);
}

/* Here is where we call release with node to be released */
void FreeTreenodeTree(TREENODE *t)
{
    FreeTree(t,release);
}

/* Make a copy of the entire tree */
TREENODE *DuplicateTree(TREENODE *node)
{
    TREENODE *kid;
    TREENODE *dup;

    assert(node != NULL);

    dup = DuplicateNode(node);

    kid = GetChild(node,1);
    while (kid != 0) {
	AddChild(dup,DuplicateTree(kid));
	kid = NextSibling(kid);
    }

    return dup;
}

/* Make a copy of only one node */
TREENODE *DuplicateNode(TREENODE *node)
{
    TREENODE *dup;

    assert(node != NULL);

    dup = malloc(sizeof(TREENODE));
    assert(dup);
    InitTNode(dup);
    dup->token = node->token;
    dup->line = node->line;
    dup->column = node->column;
    if (node->string) {
	dup->string = malloc(strlen(node->string)+1);
	assert(dup->string);
	strcpy(dup->string,node->string);
    }

    return dup;

}
