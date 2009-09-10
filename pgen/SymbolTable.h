#if !defined(SYMBOLTABLE_HEADER)
#define SYMBOLTABLE_HEADER

#include <stdio.h>

typedef struct name {
    char *string;
    struct name *next;
} NAME;

#define TBLSZ 23

int Lookup(NAME *table[], char *p);
 
void Insert(NAME *table[], char *p);

void PrintTable(FILE *f, char *s, NAME *table[]);

void FreeTable(NAME *table[]);

#endif
