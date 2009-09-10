#include <header/CommandLine.h>


#if 0
char *SystemArgument(char *Flag, char *Name, int argc, char *argv[])
{
   int Position = System_Flag(Flag,argc,argv);

   if(Position)
      return(argv[Position+1]);

   else 
      return(Name);
}
#endif

char *System_Argument(char *Flag, char *Name, int argc, char *argv[])
{
   int Position = System_Flag(Flag,argc,argv);
	
   if(Position)  
      return(argv[Position+1]);

   else
      return(Name);
   
}


#if 1
int SystemFlag(char *Flag, int argc, char *argv[])
{
   register int index=0;
   register char *base;
   register char *flag;
	
   while(index<argc) 
   {
      base = argv[index];
      flag = Flag;
	   
      while((*base == *flag) & (*flag != '\0')) 
      {
         ++base;
	 ++flag;
      }
	   
      if (*base == *flag)
         return(index);
	   
      else
         ++index;
   }
	
   return(0);
}
#endif


int System_Flag(char *Flag, int argc, char *argv[])
{
   register int index=0;
   register char *base;
   register char *flag;

   while(index<argc) 
   {
      base = argv[index];
      flag = Flag;

         while((*base == *flag) & (*flag != '\0')) 
         {
	    ++base;
	    ++flag;
	 }

	 if (*base == *flag)
	    return(index);
	   
         else
	    ++index;
   }

   return(0);
}

