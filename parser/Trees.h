/* Emacs: -*- C -*- */
/* $Id: */
#if !defined(TREES_HEADER)
#define TREES_HEADER

#include "GenericTrees.h"

typedef struct {
    TNode mynode;
    int token;
    int line;
    int column;
    char *string;
} TREENODE;

enum { TREETAG_DONE, TREETAG_TOKEN, TREETAG_LINE, TREETAG_COLUMN, TREETAG_STRING};

extern TREENODE *AllocTreeNode(int firsttag, ...);
extern void ModifyTreeNode(TREENODE *node, int firsttag, ...);
extern void PrintRawTree(FILE *f, TREENODE *node);
extern void FreeTreenodeTree(TREENODE *t);
extern TREENODE *DuplicateTree(TREENODE *node);
extern TREENODE *DuplicateNode(TREENODE *node);
extern void DumpManuelTree(FILE *f, TREENODE *node);
#endif
