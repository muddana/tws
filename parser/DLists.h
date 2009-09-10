#if !defined(DLISTS_HEADER)
#define DLISTS_HEADER

/*************************************************************************
 * Generic linked list header file.  
 *
 *
 */

typedef struct DNode {
    struct DNode *next;
    struct DNode *prev;
} DNODE;


typedef struct DList {
    DNODE *head;
    DNODE *tail;
    int count;
} DLIST;

void InitDList(DLIST *list);
void DAddHead(DLIST *list, DNODE *node);
void DAddTail(DLIST *list, DNODE *node);
void DAddNth(DLIST *list, DNODE *node, int nth);
void DInsert(DLIST *list, DNODE *node, DNODE *location);
void DEnqueue(DLIST *list, DNODE *node, int (*compare)(void *, void *));

void DRemove(DLIST *list, DNODE *node);
void *DRemHead(DLIST *list);
void *DRemTail(DLIST *list);

void FreeDList(DLIST *list, void (*release)(void *));

void *DNth(DLIST *list, int nth);

#define DHead(x)   (x)->head
#define DTail(x)   (x)->tail
#define DCount(x)  ((x)->count) 
#define DNext(x)   (x)->next
#define DPrev(x)   (x)->prev
/* #define DPrev(x)   (((void *)((DNODE *)(x))->prev)) */
#define DEmpty(x)  ((x)->count == 0)

#endif
