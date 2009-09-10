#define MYDEBUG 0
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include "SymbolTable.h"


/****************************************************************************
 * hash(), Do some hash magic on the Symbol table.
 */
static int hash(char *p)
{
   int ii = 0;
   char *pp = p;

   while (*pp)
      ii = ii<<1 ^ *pp++;
   if (ii < 0)
      ii = -ii;
    
   return ii % TBLSZ;
}

/****************************************************************************
 * Lookup() a name in the symbol table.
 */
int Lookup(NAME *table[], char *p)
{
   int ii = hash(p);
   NAME *n;
    
   for (n = table[ii]; n; n=n->next) 
   {
      if (strcmp(p,n->string) == 0)
         return 1;
   }
    
   return 0;

}

/****************************************************************************
 * Insert() a name into the symbol table.
 */
void Insert(NAME *table[], char *p)
{
   int ii = hash(p);
   NAME *n, *nn;
    
   for (n = table[ii]; n; n=n->next) 
   {
      if (strcmp(p,n->string) == 0) 
      {
         printf("error -- duplicate symbol definition: %s\n",p);
	 return;
      }
   } 

#if MYDEBUG
   printf("ABOUT TO CALL  malloc for nn\n");
#endif
   nn = malloc(sizeof(NAME));
   assert(nn);

#if MYDEBUG
   printf("ABOUT TO CALL MALLOC IN INSERT\n");
   printf("STRING LENGTH OF P = %d\n",strlen(p));
   printf("STRING P = %s\n",p);
#endif
/*   nn->string = (char *)malloc(strlen(p)+1);   */
/*   nn->string = (char *)calloc(strlen(p)+1, sizeof(char));    */
     nn->string = (char *)malloc((strlen(p)+1)*sizeof(char));
#if MYDEBUG
   printf("DONE CALLING MALLOC IN INSERT\n");
#endif

   assert(nn->string);
   strcpy(nn->string,p);
   nn->next = table[ii];
   table[ii] = nn;
}

/****************************************************************************
 * PrintTable(), output the symbol table for viewing pleasure.
 */
void PrintTable(FILE *f, char *s, NAME *table[])
{
   int i;
   NAME *n;

   for (i=0; i<TBLSZ; i++) 
   {
      for (n = table[i]; n; n=n->next)
         fprintf(f,"%s %s\n",s,n->string);
   }
}

/****************************************************************************
 * FreeTable() gives us all that memory being used by the table that we
 * don't need anymore.
 */
void FreeTable( NAME *table[])
{
   int i;
   NAME *n;

   for (i=0; i<TBLSZ; i++) 
   {
      while (table[i]) 
      {
         n = table[i];
	 table[i] = n->next;
	 free(n->string);
	 free(n);
      }  
   }
}
