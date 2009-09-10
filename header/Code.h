/***************************************************************************
           Copyright (C) 1986 by Manuel E. Bermudez
           Translated to C - 1991
****************************************************************************/

/***************************************************************************
              CODE MODULE HEADER   -   Code.h
****************************************************************************/
/* This module builds the _CODE file. 
  Variables -
      FrameSize = size of current frame
      CurrentProcLevel = current procedure or function level
      LabelCount = current number of labels
      TraceFile = file containing code generation trace
      TraceFileName = name of TraceFile
      TraceSpecified = flag to indicate trace request
      Frames = data structure that stores frame sizes
      LabelStack, OpStack, Op1Stack, Op2Stack = data structures
          that store code

  Procedures
    InitializeCode() 
       - initializes structures that store code
    CodeGen0 (S,L) String S; Clabel L;
       - stores instruction S with label L and no operands
    CodeGen1 (S1,S2,L) String S1, S2; Clabel L;
       - stores instruction S1 with label L and operand S2
    CodeGen2 (S1,S2,S3,L) String S1, S2, S3; Clabel L;
       - stores instruction S1 with label L and operands S2 and S3
    IncrementFrameSize()
       - increments size of current frame
    DecrementFrameSize()
       - decrements size of current frame
    OpenFrame()
       - opens a new frame
    CloseFrame()
       - closes the current frame
    DumpCode(OutFile) FILE *OutFIle;
       - dumps code to file _CODE

  Functions
    int MakeAddress()
       - creates a new address, from current frame size. The address is 
         an overlaid pair (ProcLevel, FrameDisplacement)
    int FrameDisplacement (Addr) int Addr;
       - returns frame displacement portion of Addr
    int ProcLevel (Addr) int Addr;
       - returns procedure level portion of Addr                     
***************************************************************************/

#define true 1
#define false 0
#define NoLabel 0
#define UndefinedString 0
typedef int boolean;
typedef int Clabel;

int FrameSize, CurrentProcLevel, LabelCount;
FILE *TraceFile;
char *TraceFileName;
boolean TraceSpecified;
Stack Frames, LabelStack, OpStack, Op1Stack, Op2Stack;

extern void InitializeCode(int argc, char *argv[]);
extern String MakeLabel(void);
extern void CodeGen0(String S, Clabel L);
extern void CodeGen1(String S1, String S2, Clabel L);
extern void CodeGen2(String S1, String S2, String S3, Clabel L);
extern void IncrementFrameSize(void);
extern void DecrementFrameSize(void);
extern void OpenFrame();
extern void CloseFrame();
extern int MakeAddress(void);
extern int FrameDisplacement(int Addr);
extern int ProcLevel(int Addr);
extern void DumpCode(FILE *OutFile);

