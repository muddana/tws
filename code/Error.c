#include <stdio.h>
#include <stdlib.h>

#define MAXIMUM_NUMBER_ERRORS 25

int ErrorCount;

void FatalError(void)
{
   FILE *fd;

   printf("\n");
   printf(" ***   Fatal Error!!!   *** \n");
   printf(" *** Processing Stopped *** \n");
   printf("\n");
   
   fd = fopen("_die_", "w");
   fclose( fd );

   exit(2);
}

void IncrementErrorCount(int n)
{
   if ((ErrorCount += n) > MAXIMUM_NUMBER_ERRORS) 
   {
     printf("*** Too many error to continue ***\n");
     FatalError(); 
   }
}


