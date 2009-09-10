#include <stdio.h>
#include <header/CommandLine.h>
#include <header/Table.h>
#include <header/Text.h>
#include <header/Error.h>
#include <header/String_Input.h>
#include <header/Code.h>
#include <header/Machine.h>

#include <header/y.tab.h>

#define  MSGLEN		8	

extern FILE *output;

/*extern int yyparse(void);*/

char *msg[MSGLEN] = {"  ",
		    "Code instruction out of range",
	            "Data Memory Underflow.",
	            "Invalid Local Address.",
	            "Invalid Global Address.",
		    "LBR incremented too far.",
	            "LBR decremented too far.",
	            "RTR decremented too far."};

void IncSTR(int i)
{
   STR += i;
}


void assert(int b, int message)
{
   if (!b) 
   {
      fprintf(output,"\n<<< MACHINE ERROR >>>: ");
      fprintf(output,"%s\n",msg[message]);
      FatalError();
   }
}


void InitializeMachine(void)
{
   Labels = AllocateStack(100);
   Ops = AllocateStack(100);
   Operand1 = AllocateStack(100);
   Operand2 = AllocateStack(100);
   Data = AllocateStack(100);
   Return = AllocateStack(100);

   CBR = 0;
   CLR = 0;
   GBR = 1;
   LBR = 1;    /*  INITIAL VALUES OF REGISTERS  */
   STR = 0;
   RBR = 0;
   RTR = 0;
}


Clabel LabelOf(Instruction I)
{
   assert ( (CBR<=I) && (I<=CLR) ,1);
   return (Element (Labels, I));
}


String OpCodeOf(Instruction I)
{

   assert ( (CBR<=I) && (I<=CLR) ,1);
   return (Element (Ops, I));
}


String Operand1Of(Instruction I)
{
   assert ( (CBR<=I) && (I<=CLR) ,1);
   return (Element (Operand1, I));
}


String Operand2Of(Instruction I)
{
   assert ( (CBR<=I) && (I<=CLR) ,1);
   return (Element (Operand2,I));
}


void DecSTR(int i)
{
   assert (STR-i >= LBR-1,2);
   STR = STR -i;
}


int LocalAddress(int i)
{
   assert ( LBR+i <= STR, 3 );
   return (LBR + i - GBR);
}

int GlobalAddress(int i)
{
   assert ( GBR + i <= STR, 4 );
   return (i);
}


int Lf(int i)
{
   return (Element(Data, GBR + LocalAddress(i) ));
}
 

int Gf(int i)
{
   return (Element (Data, GBR + GlobalAddress(i) ));
}

void UpdateLf(int i,int v)
{
   Assign (Data, GBR + LocalAddress(i), v);
}


void UpdateGf(int i,int v)
{
    Assign (Data, GBR + GlobalAddress(i), v);
}


void PushLf(int v)
{
   IncSTR(1);
   Push(Data,v);
}

int TopLf(void)
{
   return (Element (Data, STR ));
}

int PopLf(void)
{
   DecSTR(1);
   return (Pop (Data));
}


void PopOffLf(int n)
{
   int i;
   for (i = 1; i <= n; i++)
      Pop(Data);
   DecSTR(n);
}


int DepthLf(void)
{
   return (STR - LBR + 1);
}


void OpenFrame(int i)
{
   assert ( LBR + i  <= STR + 1 , 5);
   LBR = LBR + i;
}


void CloseFrame(int i)
{
   assert ( GBR <= LBR - i, 6 );
   LBR = LBR - i;
}

void PushReturnStack(Instruction I)
{
   RTR = RTR + 1;
   Push ( Return, I );
}

Instruction PopReturnStack(void)
{
   assert (RTR > RBR, 7);
   RTR = RTR - 1;
   return (Pop ( Return ));
}


/*  Get(S,buf,ndx) */
/*  Stack S; */
/*  char *buf; */
/*  int ndx; */
/*  { */

/*  	int start, stop, i; */
/*  	int Allblanks = 1; */

/*  	start = ndx * 7; */
/*  	stop  = (ndx+1) * 7; */

/*  	ResetBufferInTextTable(); fprintf(stderr, "%s ", buf); */
/*  	for (i = start; i < stop; i++) {  */
/*  	   if (!isspace(buf[i])) { */
/*  	     AdvanceOnCharacter((int)buf[i]);  */
/*  	     fprintf(stderr, " %d", (int)buf[i]); */
/*  	     Allblanks = 0; */
/*  	   } */
/*  	}  fprintf(stderr, "\n"); */

/*  	if (Allblanks) */
/*  	  Push(S,UndefinedString); */
/*  	else */
/*  	  Push(S,ConvertStringInBuffer()); */
/*  } */

/*  ReadCode(CodeFile) */
/*  FILE *CodeFile; */
/*  { */
/*  	char buf[30]; */
/*  	int  i = 0; */

/*  	fgets(buf,29,CodeFile); */
/*  	while (!feof(CodeFile)) { */
/*  	  i++; */
/*            Get(Labels,buf,0); */
/*            Get(Ops,buf,1); */
/*            Get(Operand1,buf,2); */
/*            Get(Operand2,buf,3); */
/*  	  fgets(buf,29,CodeFile); */
/*  	  fgets(buf,29,CodeFile);  */
/*          } */
/*          CLR = SizeOf(Labels); */
/*  } */



void Get(Stack S, char *buf, int size)
{
   int i;
   ResetBufferInTextTable();   
   for (i = 0; i < size; i++) 
   { 
      AdvanceOnCharacter((int)buf[i]);
   }  

   if (size == 0) 
      Push(S, UndefinedString);
   else
      Push(S, ConvertStringInBuffer());
}


void ReadCode(FILE *CodeFile)
{
   setyyin("_CODE");
   yyparse();
   closeyyin();

   CLR = SizeOf(Labels);
}


void DumpMemory(FILE *CodeFile)
{
   int i,Size;
 
   fprintf(CodeFile, "    DATA MEMORY             RETURN MEMORY\n");
   fprintf(CodeFile, "    -----------             -------------\n");
   
   if (SizeOf(Data) > SizeOf(Return))
      Size = SizeOf(Data);
   else 
      Size = SizeOf(Return);

   for (i = 1; i <= Size; i++) 
   {
      fprintf(CodeFile, "   ");

      if (i > SizeOf(Data))
         fprintf(CodeFile,"                         ");
      else 
      {
         fprintf(CodeFile,"%3d",i-1);
         if (i == LBR)
            fprintf(CodeFile, " LBR ");
         else
            fprintf(CodeFile, "     ");
         fprintf(CodeFile,"%5d          ",Element(Data,i));
      }
      if (i > SizeOf(Return))
         fprintf(CodeFile,"\n");
      else
         fprintf(CodeFile, "%3d       %5d\n",i,Element(Return,i));
   }
}


void DumpCode(FILE *CodeFile)
{
   int i,j;

   fprintf(CodeFile,"CODE IS AS FOLLOWS:");
   for(i=1; i <= SizeOf(Labels); i++) 
   {
      WriteString(CodeFile, Element(Labels,i));

      for (j = 1; j <= (7 - StringLength(Element(Labels,i))); j++)
         fprintf (CodeFile, " ");
      WriteString ( CodeFile, Element (Ops,i));

      for (j = 1; j <= (7 - StringLength(Element(Ops,i))); j++)
         fprintf (CodeFile, " ");
      WriteString (CodeFile, Element (Operand1,i));

      for (j = 1; j <= (7 - StringLength(Element(Operand1,i))); j++)
         fprintf (CodeFile, " ");
      WriteString (CodeFile, Element (Operand2,i));

      for (j = 1; j <= (7 - StringLength(Element(Operand2,i))); j++)
         fprintf(CodeFile, " ");

      fprintf(CodeFile,"\n");
   }
}
