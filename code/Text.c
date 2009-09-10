#include <stdio.h>

#define UndefinedString 0 
#define HashModulo 1024 
#define Expected_number_strings 1000 
#define Expected_character_usage 7000 

static short int Location[Expected_number_strings];
static char  Characters[Expected_character_usage];
static int Bucket[HashModulo];
static short int Overflow[Expected_number_strings];
static int Bufferindex;
static int Top, OTop;
int LowerBoundary,UpperBoundary;

void InitializeTextModule(void)
{
   int index;
   Location[1]=0; Top=1;
	
   for (index=0; index<HashModulo; ++index)
      Bucket[index]=UndefinedString;

   Bufferindex = 0;
   LowerBoundary = -1;
   UpperBoundary = -1;
}


void ResetBufferInTextTable(void)
{
   Bufferindex=Location[Top];
}


void AdvanceOnCharacter(char c)
{
   Characters [Bufferindex++]= c;
}


static int Matches(int S1, int S2, int S2_length)
{
   int BaseAddress = Location [ S1 ];

   if ((Location[S1+1] - BaseAddress) == S2_length) 
   {
      S2_length = S2+S2_length;

      while (S2<S2_length) 
      {
         if (Characters[BaseAddress] != Characters[S2])
            return (0);

	 ++BaseAddress;
         ++S2;
      }

      return (1);
   }
	
   else 
      return (0);
}

int ConvertStringInBuffer(void)
{
   int BaseAddress = Location[Top];
   int Length = Bufferindex - BaseAddress;
   int Hash = ((Bufferindex>BaseAddress+1) ? (((Characters[BaseAddress+1]
	      + Characters[Bufferindex-2]) * Length) % HashModulo)
	      :((Bufferindex>BaseAddress) ? Characters[BaseAddress]:0));

   int Previous = UndefinedString;
   int Next = Bucket[Hash];
   int NotFound = 1;

   while (Next!=UndefinedString)
   { 
      if (Matches (Next, BaseAddress, Length))
	 return (Next);
	      
      else
      {
         Previous = Next;
	 Next =  Overflow [Next];
      }
   }
     
   Next = Top++;
   Location [Top] = BaseAddress + Length;
   Overflow [OTop++] = UndefinedString;
	
   if (Previous == UndefinedString)
      Bucket[Hash] = Next;
   else
      Overflow [Previous] = Next;
	
   return(Next);
}


int TextSize(void)
{
   return(Top-1);
}


void FreezeLowerBound(void)
{
   LowerBoundary = Top;
}


void FreezeUpperBound(void)
{
   UpperBoundary = Top;
}


int IsStringReserved(int S)
{
   return((S >= LowerBoundary) & (S < UpperBoundary));
}


char Character(int S, int i)
{
   return (Characters [Location [S] + i - 1]);
}


int StringLength(int S)
{
   return (Location [S + 1] - Location [S]);
}


void WriteString(FILE *file,int S)
{
   register int Base = Location[S];
   register int top  = Location[S+1];
	
   while (Base < top)  
   {
      putc(Characters[Base],file);  
      ++Base;
   }
}


void Write_String(FILE *file, int S)
{
   register int Base = Location[S];
   register int top  = Location[S+1];
	
   while (Base<top)  
   {
      putc(Characters[Base],file);   
      ++Base;
   }
}


void PrintAllStrings(FILE *file)
{
   int i;
   fprintf(file,"TEXT TABLE\n------------\n");
	
   for(i=1; i <= TextSize(); i++) 
   {
      fprintf(file,"%5d:",i);
      WriteString(file,i);
      fprintf(file,"\n");
   }
}
