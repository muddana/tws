#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdarg.h>
#include "GenericTrees.h"

#define TRUE  1
#define FALSE 0

static void PrintTabs(FILE *f, int count);
static void PrintTreeTabs(FILE *f, char *separator, int count);

/*************************************************************************
 * InitTNode() call this before using a TNODE or a derived class of TNODE.    
 * 
 *
 */
 
void InitTNode(void *node)
{
   TNode *t;

   assert(node != NULL);
   t = node;
   t->parent = NULL;
   t->lastchild = NULL;
   t->nextsibling = NULL;
}

/*************************************************************************
 * AddChild() makes 'child' the last kid of 'parent'.
 */
 
void AddChild(void *p, void *c)
{
   TNode *parent = p;
   TNode *child = c;

   assert(child != NULL);
   assert(child->parent == NULL); /* make sure child is added "new" */
   assert(parent != NULL);
	
   child->parent = parent;

   if (parent->lastchild) 
   {
      child->nextsibling = parent->lastchild->nextsibling;
      parent->lastchild = parent->lastchild->nextsibling = child;
   }
   else 
      parent->lastchild = child->nextsibling = child;
}


/*************************************************************************
 * AddChildren() adds multiple children to 'parent'.  This function
 * successively calls AddChild() for each child in the argument list.
 * The argument list is terminated with a NULL pointer.
 *
 */

void AddChildren(void *parent, void *firstchild, ...)
{
   va_list ap;
   void *child;

   assert(parent != NULL);
   assert(firstchild != NULL);
    
   va_start(ap,firstchild);
    
   child = firstchild;
   while (child != NULL) 
   {
      AddChild(parent,child);
      child = va_arg(ap,void *);
   }
    
   va_end(ap);
}


/*************************************************************************
 * AddNthChild() adds 'child' to the 'nth' position of the parent.
 * Counting of children starts with 1.
 *
 */

void AddNthChild(void *p, void *c, int n)
{
   TNode *parent = p;
   TNode *child = c;

   assert(parent != NULL);  
   assert(child != NULL);

   assert(n > 0);  /* children start from n=1 */
   assert(child->parent == 0); /* make sure child is added "new" */

    if (n == 1) 
    {
       child->parent = parent;

       if (parent->lastchild)
	  child->nextsibling = parent->lastchild->nextsibling;
       else
	  parent->lastchild = child;

       parent->lastchild->nextsibling = child;
   }

   else 
   {
      TNode *prev = GetChild(parent,n-1);

      if (prev == parent->lastchild)
         AddChild(parent,child);
      else if (prev) 
      {
         child->parent = parent;

         child->nextsibling = prev->nextsibling;
         prev->nextsibling = child;
      }
      else
          AddChild(parent,child);
   }

}

/*************************************************************************
 * ChildCount() returns the count of children 'node' has.
 * 
 *
 */

int ChildCount(void *node)
{
   TNode *parent = node;

   assert(node != NULL);

   if (parent->lastchild) 
   {
      TNode *t = parent->lastchild;
      int i = 0;
      do 
      {
         t = t->nextsibling;
	 i++;
      } while (t != parent->lastchild);

      return i;
   }
   else
      return 0;

}


/*************************************************************************
 * GetChild() returns a pointer to the 'nth' child of the parent.  
 * 
 *
 */

void *GetChild(void *p, int n)
{
   TNode *parent = p;

   assert(parent != NULL);
   assert(n > 0);

   if (parent->lastchild) 
   {
      TNode *t = parent->lastchild;
      int i = 0;
      do 
      {
         t = t->nextsibling;
	 i++;
	 if (i == n)
	    return t;
      } while (t != parent->lastchild);
   }	
	
   return NULL;

}

/*************************************************************************
 * GetParent() returns a pointer to the parent of 'child'.
 * 
 *
 */

void *GetParent(void *c)
{
   TNode *child = c;

   assert(child != NULL);

   return child->parent;
}



/*************************************************************************
 * GetChildNum() returns the number (position) of 'child' (relative to
 * the parent).
 * 
 *
 */

int GetChildNum(void *c)
{
   TNode *child = c;
   TNode *t;
   int i;

   assert(child != NULL);
    
   if (child->parent == 0)
      return 0;

   t = child->parent->lastchild;
   i = 0;
   do 
   {
      t = t->nextsibling;
      i++;
      if (t == child)
	 return i;
   } while (t != child->parent->lastchild);

   assert(0);  /* really bad */
   return 0;

}

/*************************************************************************
 * NextSibling() moves the pointer from the current 'child' to the next
 * 'child'.
 */

void *NextSibling(void *node)
{
   TNode *child = node;
   return (child == child->parent->lastchild) ? 0 : child->nextsibling;
   /* Return NULL if there are no more children. */
}

/*************************************************************************
 * UnlinkTree() removes the node and it's subtree from the tree.
 * 
 *
 */

void UnlinkTree(void *n)
{
   TNode *node = n;
   TNode *prev;

   assert(node != NULL);
    
   if (node->parent == 0)
      return;

   assert(node->parent->lastchild != 0);


   prev = node->parent->lastchild;

   while (prev->nextsibling != node) 
      prev = prev->nextsibling;
   
   prev->nextsibling = node->nextsibling;

   if (node == node->parent->lastchild) 
   {
      node->parent->lastchild = prev;
	
      if (node == prev)
	 node->parent->lastchild = 0;
   }

   node->parent = 0;

}


/*************************************************************************
 * UnlinkTrees() removes multiple nodes (and their subtrees) from the 
 * tree.  This functions sucessively call UnlinkTree for each node
 * specified in the argument list.  The argument list is terminated 
 * by a NULL pointer.
 * 
 *
 */

void UnlinkTrees(void *firstnode, ...)
{
   va_list ap;
   void *node;

   va_start(ap,firstnode);
    
   node = firstnode;
   while (node != NULL) 
   {
      UnlinkTree(node);
      node = va_arg(ap,void *);
   }
    
   va_end(ap);
}


/*************************************************************************
 * PrintTree() visits each node (pre-order) and calls 'PrintFunc' to
 * print the contents of each node.  This function will automatically
 * indent and will pass the indent count to 'PrintFunc'.  This ident
 * count can be used by PrintTreeBlanks().
 * 
 *
 */

void PrintTree(FILE *f, void *node, int tab_level, char *separator,
	       void (*PrintFunc)(FILE *, void *, int))  /* node, tab_level */
{
   TNode *kid;

   assert(PrintFunc != NULL);
    
   if (node == NULL)
      return;

   PrintTreeTabs(f,separator,tab_level);
   PrintFunc(f,node,tab_level);

   kid = GetChild(node,1);
   while (kid != 0) 
   {
      PrintTree( f, kid, tab_level+1, separator, PrintFunc);
      kid = NextSibling(kid);
   }

}


/*************************************************************************
 * PrintTreeTabs() prints "bars and spaces" based on indent level.
 * 
 *
 */

static void PrintTreeTabs(FILE *f, char *separator, int count)
{
   int i;

   for (i=0; i<count; i++)
      fprintf(f,"%s",separator); 
}

/*************************************************************************
 * PrintTabs()
 * 
 *
 */

static void PrintTabs(FILE *f, int count)
{
   int i;

   for (i=0; i<count; i++)
      fprintf(f,"    ");
}


/*************************************************************************
 * PrintTreeBlanks() prints blanks corresponding to indent level.
 * 
 *
 */

void PrintTreeBlanks(FILE *f, int count)
{
   int i;

   for (i=0; i<count; i++)
      fprintf(f, "  ");
}


/*************************************************************************
 * FreeTree() frees every node of the tree.  This function will pass
 * each node "through" a release function if specified.  This release
 * function should not free the actual node, only "extra" data.
 * If no release function is required, pass a NULL pointer.
 * 
 *
 */

void FreeTree(void *node, void (*release)(void *))
{
   TNode *kid;

   if (node == NULL)
      return;

   /* first remove the node from the tree */

   UnlinkTree(node);

   /* free all the children */

   kid = GetChild(node,1);
   while (kid != 0) 
   {
      (void)FreeTree(kid,release);  /* the kid will unlink itself */
      kid = GetChild(node,1);
   }
        
   /* finally free the node */

   if (release != NULL)
      release(node);

   free(node);

}


/*************************************************************************
 * Lift() difers the operation until it can be determined later.
 * 
 *
 */

void Lift(void *node)
{
   TNode *target = node;
   TNode *parent, *kid;
   int childnum;

   assert(target != NULL);

   parent = target->parent;
   assert(parent != NULL);

   childnum = GetChildNum(target);
   UnlinkTree(target);

   kid = GetChild(target,1);
   while (kid != 0) 
   {
      UnlinkTree(kid);
      AddNthChild(parent,kid,childnum);
      childnum++;
      kid = GetChild(target,1);
   }

}
