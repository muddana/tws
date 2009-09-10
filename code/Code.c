/******************************************************************
*             Copyright (C) 1986 by Manuel E. Bermudez
*             Translated to C - 1991
*******************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <header/CommandLine.h>
#include <header/Table.h>
#include <header/Text.h>
#include <header/Error.h>
#include <header/String_Input.h>
#include <header/Tree.h>
#include <header/Open_File.h>
#include <header/Code.h>


void InitializeCode(int argc, char *argv[])
{ 
   int index;
 
   Frames = AllocateStack(20);
   LabelStack = AllocateStack(500);
   OpStack = AllocateStack(500);
   Op1Stack = AllocateStack(500);
   Op2Stack = AllocateStack(500);
   index = System_Flag ("-trace", argc, argv);
   
   if (index)
   {
      TraceSpecified = true;
      TraceFileName = System_Argument
                            ("-trace", "_TRACE", argc, argv); 
      TraceFile = Open_File (TraceFileName, "w");
#if 1
   fprintf (TraceFile,"Hello.\n");
   rewind (TraceFile); 
#endif
   }

   else
       TraceSpecified = false;
}


void ItoC(int N)
{
   Stack Temp;
   Temp = AllocateStack(50);

   if (N == 0)
      AdvanceOnCharacter ('0');

   else
   {
      while (N > 0)
      {
         Push (Temp, (N % 10) + 48);
         N /= 10;
      }
      while (!(IsEmpty (Temp)))
         AdvanceOnCharacter ((char)(Pop(Temp)));
   }
}


String MakeLabel(void)
{
   ResetBufferInTextTable();
   LabelCount += 1;
   AdvanceOnCharacter ('L');
   ItoC (LabelCount);
   return (ConvertStringInBuffer());
}


void WriteCodeLine (FILE *OutFile, int Line)
{
   int i;

   Write_String (OutFile, Element(LabelStack, Line));
   for (i=1; i <= 7- StringLength (Element (LabelStack, Line)); i++)
      fprintf (OutFile, " ");

   Write_String (OutFile, Element(OpStack, Line));
   for (i=1; i <= 7- StringLength (Element (OpStack, Line)); i++)
      fprintf (OutFile, " ");

   Write_String (OutFile, Element(Op1Stack, Line));
   for (i=1; i <= 7- StringLength (Element (Op1Stack, Line)); i++)
      fprintf (OutFile, " ");

   Write_String (OutFile, Element(Op2Stack, Line));
   for (i=1; i <= 7- StringLength (Element (Op2Stack, Line)); i++)
      fprintf (OutFile, " ");

   fprintf (OutFile, "\n");
}


void CodeGen0 (String S, Clabel L)
{
   Push (LabelStack, L);
   Push (OpStack, S);
   Push (Op1Stack, UndefinedString);
   Push (Op2Stack, UndefinedString);

   if (TraceSpecified)
      WriteCodeLine (TraceFile, SizeOf(LabelStack));
}


void CodeGen1 (String S1,String S2,Clabel L)
{
   Push (LabelStack, L);
   Push (OpStack, S1);
   Push (Op1Stack, S2);
   Push (Op2Stack, UndefinedString);

   if (TraceSpecified)
      WriteCodeLine (TraceFile, SizeOf(LabelStack));
}


void CodeGen2 (String S1,String S2,String S3,Clabel L)
{
   Push (LabelStack, L);
   Push (OpStack, S1);
   Push (Op1Stack, S2);
   Push (Op2Stack, S3);

   if (TraceSpecified)
      WriteCodeLine (TraceFile, SizeOf(LabelStack));
}


void IncrementFrameSize(void)
{
   if (TraceSpecified)
      fprintf (TraceFile, "Incrementing Framesize to %d\n", FrameSize+1);

   FrameSize += 1;
   Assign (Frames, CurrentProcLevel, FrameSize);
}


void DecrementFrameSize(void)
{
   if (TraceSpecified)
      fprintf (TraceFile, "Decrementing Framesize to %d\n", FrameSize-1);

   FrameSize -= 1;
   Assign (Frames, CurrentProcLevel, FrameSize);
}


void OpenFrame()
{
   if (TraceSpecified)
      fprintf (TraceFile,
               "Opening Frame: Old Framesize is %d\n", FrameSize);

   FrameSize = 0;
   CurrentProcLevel += 1;
   Assign (Frames, CurrentProcLevel, FrameSize);
}


void CloseFrame()
{
   if (CurrentProcLevel == 0)
   {
      printf ("Attempted to Close Global Frame\n");
      FatalError();
   }

   else
   {
      CurrentProcLevel -= 1;
      FrameSize = Element (Frames, CurrentProcLevel);

      if (TraceSpecified)
      {
         fprintf (TraceFile, "Closing Frame: Decrementing Current Proc ");
         fprintf (TraceFile, "Level to %d\n", CurrentProcLevel);
         fprintf (TraceFile, "Closing Frame: Restoring Framesize ");
         fprintf (TraceFile, "to %d\n", FrameSize);
      }
   }
}


int MakeAddress(void)
{
   return(10000 * CurrentProcLevel + FrameSize);
}


int FrameDisplacement(int Addr)
{
   return(Addr % 10000);
}


int ProcLevel(int Addr)
{
   return(Addr/10000);
}


void DumpCode(FILE *OutFile)
{
   int i;
   
   for (i=1; i <= SizeOf(LabelStack); i++)
      WriteCodeLine (OutFile, i);
} 
