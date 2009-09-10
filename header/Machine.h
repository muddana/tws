
/*******************************************************************
         Copyright (C) 1986 by Manuel E. Bermudez 
*******************************************************************}

{*******************************************************************
          A B S T R A C T     M A C H I N E    M O D U L E


This module impements the basic data structures for the abstract
machine for which the tiny compiler generates code.

Visible portions of the module:

  
      type Instruction: representation of an instruction address

  Operations to access instructions:

        procedure InitializeMachine;
	   - Initializes the machine.

	procedure LTEnter(n,r : integer);
	   - Will add entry to LTable with proc level n and
	     LBR r.

	procedure LTRemove;
	   - Will remove most recent proc call with procedure level n
	   i from LTable.

 	function LBRAddress (n : integer) : integer;
	   - This function will return the address of the LBR of the
	     most recent procedure call with proc level n.

        function LabelOf (I:instruction): CLabel;
	   -  returns the label of instruction I
      
        function OpCodeOf (I:Instruction): String;
	   -  returns the OpCode of instruction I

        function Operand1Of (I:Instruction): String;
	   -  returns the first operand of instruction I,
	      if there is one.

        function Operand2Of (I:Instruction): String;
	   -  returns the second operand of instruction I,
	      if there is one.

        procedure IncSTR(i:integer);
	   -  Increments the Stack Top Register by i

        procedure DecSTR(i:integer);
	   -  Decrements the Stack Top Register by i

        function LocalAddress(i:integer):integer;
	   -  Returns the address of local variable i

        function GlobalAddress(i:integer):integer;
	   -  Returns the global address of variable i

        function Lf(i:integer): integer;
	   -  Returns the value of the i'th variable in the local frame

        function Gf (i:integer):integer;
	   -  Returns the value of the i'th variable in the global frame

        procedure UpdateLf (i,v:integer);
	   -  Replaces the value of the i'th variable in the local frame
	      with v.

        procedure UpdateGf(i,v:integer);
	   -  Replaces the value of the i'th variable in the global frame
	      with v.

        procedure PushLf (v:integer);
	   -  Pushes v on the local frame.

        function TopLf:integer;
	   -  Returns the top value of the local frame.

        function PopLf: integer;
	   -  Returns (and pops) the top value of the local frame.

        procedure PopOffLf(n:integer);
	   -  Pops off n values from the local frame.

        function DepthLf:integer;
	   - Returns the size of the local frame.

        procedure OpenFrame(i:integer);
	   - Opens a new frame, leaving the previous frame with i values.

        procedure CloseFrame(i:integer);
	   -  Closes the local frame, leaving the previous frame with
	      i more values than it had before closing.

        procedure PushReturnStack (I:Instruction);
	   -  Pushes instruction I on the return stack.

        function PopReturnStack: Instruction;
	   -  Returns (and pops off) the top instruction on the return
	      stack.

        procedure ReadCode (var CodeFile:text);
	   -  Reads in the code to be executed from CodeFile.

        procedure DumpMemory(var CodeFile: text);
	   -  Dumps the memory contents to CodeFile.

        procedure DumpCode(var CodeFile: text);
	   -  Dumps the code memory contents to CodeFile.

*******************************************************************/

typedef int Instruction;


int CBR, CLR, GBR, LBR, STR, RBR, RTR;

Stack Labels, Ops, Operand1, Operand2;  /*  CODE MEMORY   */ 

Stack Data,                        /*  DATA MEMORY   */
      Return,                      /*  RETURN MEMORY */
      Aggregate;



/*
var LTable: record
	CurrLevel: Stack;
	Level: Stack;
	LBR: Stack;
	Prior: Stack;
    end;
*/



extern void InitializeMachine(void);

extern LTEnter();

extern LTRemove();

extern LBRAddress();

/*extern Clabel LabelOf (Instruction I);*/

extern String OpCodeOf(Instruction I);

extern String Operand1Of(Instruction I);

extern String Operand2Of(Instruction I);

extern void IncSTR(int i);

extern void DecSTR(int i);

extern int LocalAddress(int i);

extern int GlobalAddress(int i);

extern int Lf(int i);

extern int Gf(int i);

extern void UpdateLf(int i, int v);

extern void UpdateGf(int i, int v);

extern void PushLf(int v);

extern int TopLf(void);

extern int PopLf(void);

extern void PopOffLf(int n);

extern int DepthLf(void);

extern void OpenFrame(int i);

extern void CloseFrame(int i);

extern void PushReturnStack(Instruction I);

extern Instruction PopReturnStack(void);

extern void ReadCode(FILE *CodeFile);

extern void DumpMemory(FILE *CodeFile);

extern void DumpCode(FILE *CodeFile);
