
/*************************************************************************
 * Generic linked list routines.
 *
 *
 */

#include <stdio.h>
#include <assert.h>
#include "DLists.h"


/*************************************************************************
 * InitDList() initializes the list header to initial values
 *
 *
 */

void InitDList(DLIST *list)
{
   assert(list != NULL);
   /*   list->head = NULL; */
   list->tail = NULL;
   DHead(list) = NULL;
   /*   DTail(list) = NULL;*/
   DCount(list) = 0;
}


/*************************************************************************
 * DAddHead() adds a node to the head of the list
 *
 *
 */

void DAddHead(DLIST *list, DNODE *node)
{
   assert(list != NULL);
   assert(node != NULL);
    
   if (DEmpty(list))                  /* empty list */
   {
      DNext(node) = node;
      DPrev(node) = node;
      DHead(list) = node;
      DTail(list) = node;
   }

   else                               /* head of list */
   {
      DNext(node) = DHead(list);
      DPrev(node) = DTail(list);
      DPrev(DHead(list)) = node;
      DHead(list) = node;
      DNext(DTail(list)) = node;
   } 

   DCount(list)++;
}


/*************************************************************************
 * DAddTail() adds a node to the tail of the list
 *
 *
 */

void DAddTail(DLIST *list, DNODE *node)
{
    assert(list != NULL);
    assert(node != NULL);    

    if (DEmpty(list))                  /* empty list */
    {
       DNext(node) = node;
       DPrev(node) = node;
       DHead(list) = node;
       DTail(list) = node;
    }
    else 
    {
       DNext(node) = DHead(list);             /* tail of list */
       DPrev(node) = DTail(list);
       DNext(DTail(list)) = node;
       DTail(list) = node;
       DPrev(DHead(list)) = node;
    }

    DCount(list)++;

}


/*************************************************************************
 * DAddNth() inserts node into nth position in the list.  The head 
 * position corresponds to nth == 1.
 *
 *
 */

void DAddNth(DLIST *list, DNODE *node, int nth)
{
   int i;
   DNODE *traverse;

   assert(list != NULL);
   assert(node != NULL);
   assert(nth >= 1);

   if ((nth == 1) || DEmpty(list))
      DAddHead(list,node);
   else if (nth > DCount(list))
      DAddTail(list,node);
   else 
   {
      traverse = DHead(list);
      for (i=2; i< nth; i++)
         traverse = DNext(traverse);
      DInsert(list,node,traverse);
   }
}


/*************************************************************************
 * DInsert() inserts node into the list.  Insertion is after
 * 'location'.
 *
 *
 */

void DInsert(DLIST *list, DNODE *node, DNODE *location)
{
   assert(list != NULL);
   assert(node != NULL);    
    
   if (DEmpty(list))                  /* empty list */
   {    
      DNext(node) = node;
      DPrev(node) = node;
      DHead(list) = node;
      DTail(list) = node;
   }

   else if (location == NULL)         /* head of list */
   {    
      DNext(node) = DHead(list);
      DPrev(node) = DTail(list);
      DPrev(DHead(list)) = node;
      DHead(list) = node;       
      DNext(DTail(list)) = node;
   }

   else if (DTail(list) == location)  /* tail of list */
   {
      DNext(node) = DHead(list);
      DPrev(node) = DTail(list);
      DNext(DTail(list)) = node;
      DTail(list) = node;       
      DPrev(DHead(list)) = node;
   }

   else                               /* middle of list */
   {    
      DNext(node) = DNext(location);
      DPrev(node) = location;
      DPrev(DNext(location)) = node;
      DNext(location) = node;
   }

   DCount(list)++;
}


/*************************************************************************
 * DEnqueue() inserts a node into a list in an order based on
 * the compare function given.  The compare function returns an
 * integer.  See strcmp().
 *
 *
 */

void DEnqueue(DLIST *list, DNODE *node, int (*compare)(void *, void *))
{
   DNODE *traverse, *previous;

   assert(list != NULL);
   assert(node != NULL);
   assert(compare != NULL);

   if (DEmpty(list)) 
   {
      DAddHead(list,node);
      return;
   }

   traverse = DHead(list);
   previous = traverse;
   do 
   {
      if (compare(traverse,node) < 0) 
      {
         if (traverse == previous)
            DAddHead(list,node);
         else 
            DInsert(list,node,previous);
                
         return;
      }
      previous = traverse;
      traverse = DNext(traverse);

   } while (traverse != DHead(list));

   DAddTail(list,node);
}


/*************************************************************************
 * DRemove() removes a node from the list.
 *
 *
 */

void DRemove(DLIST *list, DNODE *node) 
{
   assert(list != NULL);
   assert(node != NULL);
   assert(!DEmpty(list));              

   if (DCount(list) == 1)             /* only one node in the list */
   {    
      DHead(list) = NULL;
      DTail(list) = NULL;
   }

   else if (DHead(list) == node)      /* remove head */
   {    
      DHead(list) = DNext(DHead(list));
      DPrev(DHead(list)) = DTail(list);
      DNext(DTail(list)) = DHead(list);
   }

   else if (DTail(list) == node)      /* remove tail */
   {    
      DTail(list) = DPrev(DTail(list));
      DNext(DTail(list)) = DHead(list);
      DPrev(DHead(list)) = DTail(list);
   }
    
   else                               /* remove from middle */
   {     
      DNext(DPrev(node)) = DNext(node);
      DPrev(DNext(node)) = DPrev(node);
   }
   DCount(list)--;
   assert(DCount(list) >= 0);
}


/*************************************************************************
 * DRemHead() removes the head node from the list.  The return value
 * is a pointer to the removed node.
 *
 *
 */

void *DRemHead(DLIST *list)
{
   DNODE *tmp;

   assert(list != NULL);
   assert(!DEmpty(list));

   tmp = DHead(list);

   if (DCount(list) == 1)             /* only one node in the list */
   {
      DHead(list) = NULL;
      DTail(list) = NULL;
   }

   else                               /* remove head */
   {
      DHead(list) = DNext(DHead(list));
      DPrev(DHead(list)) = DTail(list);
      DNext(DTail(list)) = DHead(list);
   }

   DCount(list)--;
   assert(DCount(list) >= 0);
   return tmp;
    
}


/*************************************************************************
 * DRemTail() removes the tail node from the list.  The return value
 * is a pointer to the removed node
 *
 *
 */

void *DRemTail(DLIST *list) 
{
   DNODE *tmp;

   assert(list != NULL);
   assert(!DEmpty(list));

   tmp = DTail(list);

   if (DCount(list) == 1)             /* only one node in the list */
   {
      DHead(list) = NULL;
      DTail(list) = NULL;
   }

   else                                /* remove tail */
   {
      DTail(list) = DPrev(DTail(list));
      DNext(DTail(list)) = DHead(list);
      DPrev(DHead(list)) = DTail(list);
   }

   DCount(list)--;
   assert(DCount(list) >= 0);
   return tmp;
}

#if 0
/*************************************************************************
 * DFind() doesn't work
 *
 *
 */

void *DFind(DLIST *list, void *thing, int (*compare)(void *, void *)) 
{
   DNODE *tmp;
   int i;

   assert(list != NULL);
   assert(compare != NULL);

   if (DEmpty(list))
      return NULL;

   tmp = DHead(list);
   for (i = 0; i < DCount(list); i++) 
   {
      if (compare(tmp,thing) == 0)
         return tmp;        
      tmp = DNext(tmp);
   }

   return NULL;
}
#endif

/*************************************************************************
 * FreeDList() frees the nodes but not the header of a DLIST.
 * If the 'release' function is NULL, free() is called on each
 * node.  Otherwise, a pointer to the node is passed to the
 * 'release' function.  Note: the 'release' function should
 * not free the node; it should only free 'things' hanging off
 * the node.  FreeDList will free the node. 
 *
 */

void FreeDList(DLIST *list, void (*release)(void *))
{
   DNODE *node;

   assert(list != NULL);

   while (!DEmpty(list)) 
   {
      node = DRemHead(list);
      if (release == NULL) 
         free(node);
      else 
      {
         release(node);
         free(node);   
      }
   }

   assert(DHead(list) == NULL);
   assert(DTail(list) == NULL);
   assert(DCount(list) == 0);

}


/*************************************************************************
 * DNth() returns a pointer to the nth node in the list.  The head 
 * position corresponds to nth == 1.   
 *
 */

void *DNth(DLIST *list, int nth)
{
   DNODE *traverse;
   int i;

   assert(list != NULL);
   assert(nth >= 1);

   if (nth > (DCount(list)))
      return DTail(list);
   else 
   {
      traverse = DHead(list);
      for (i=1; i<nth; i++) 
         traverse = DNext(traverse);

      return traverse;
   }
}
