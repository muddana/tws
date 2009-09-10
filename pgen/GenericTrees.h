#if !defined(GENERICTREES_HEADER)
#define GENERICTREES_HEADER

#include <stdio.h>

typedef struct generictreenode {
    struct generictreenode *parent;
    struct generictreenode *lastchild; /* lastchild->sibling is first child */
    struct generictreenode *nextsibling;
} TNode;

void InitTNode(void *node);
void DeleteTNode(TNode *);
void AddChild(void *parent, void *child);
void AddChildren(void *parent, void *firstchild, ...);
void AddNthChild(void *parent, void *child, int childnum);
int ChildCount(void *node);
void *GetChild(void *parent, int childnum);
void *GetParent(void *child);
void *NextSibling(void *node);
int GetChildNum(void *child);
void UnlinkTree(void *node);
void UnlinkTrees(void *firstnode, ...);
void PrintTree(FILE *f, void *node, int tab_level, char *separator, void (*PrintFunc)(FILE *, void *, int));
void PrintTreeBlanks(FILE *f, int count);
void FreeTree(void *root, void (*release)(void *));
void Lift(void *node);

#endif
