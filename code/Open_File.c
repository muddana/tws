#include <stdio.h>
#include <stdlib.h>
#include <header/Open_File.h>

FILE *Open_File(char *Name, char *Mode)
{
   FILE *file = fopen(Name,Mode);
       
   if (file==NULL) 
   {
      fprintf(stdout,"unable to open file %s\n",Name);
      exit(1);
   }
	
   else 
      return(file);
}
