/*******************************************************************
          Copyright (C) 1986 by Manuel E. Bermudez
          Translated to C - 1991
********************************************************************/

#include <stdio.h>
#include <header/CommandLine.h>
#include <header/Open_File.h>
#include <header/Table.h>
#include <header/Text.h>
#include <header/Error.h>
#include <header/String_Input.h>
#include <header/Tree.h>
#include <header/Code.h>
#include <header/CodeGenerator.h>  
#include <stdlib.h>


#define LeftMode 0
#define RightMode 1

    /*  ABSTRACT MACHINE OPERATIONS  */
#define    NOP          1   /* 'NOP'       */
#define    HALTOP       2   /* 'HALT'      */      
#define    LITOP        3   /* 'LIT'       */
#define    LLVOP        4   /* 'LLV'       */
#define    LGVOP        5   /* 'LGV'       */
#define    SLVOP        6   /* 'SLV'       */
#define    SGVOP        7   /* 'SGV'       */
#define    LLAOP        8   /* 'LLA'       */
#define    LGAOP        9   /* 'LGA'       */
#define    UOPOP       10   /* 'UOP'       */
#define    BOPOP       11   /* 'BOP'       */     
#define    POPOP       12   /* 'POP'       */  
#define    DUPOP       13   /* 'DUP'       */
#define    SWAPOP      14   /* 'SWAP'      */
#define    CALLOP      15   /* 'CALL'      */
#define    RTNOP       16   /* 'RTN'       */
#define    GOTOOP      17   /* 'GOTO'      */
#define    CONDOP      18   /* 'COND'      */
#define    CODEOP      19   /* 'CODE'      */
#define    SOSOP       20   /* 'SOS'       */
#define    LIMITOP     21   /* 'LIMIT'     */

    /* ABSTRACT MACHINE OPERANDS */

         /* UNARY OPERANDS */
#define    UNOT        22   /* 'UNOT'     */
#define    UNEG        23   /* 'UNEG'     */
#define    USUCC       24   /* 'USUCC'    */
#define    UPRED       25   /* 'UPRED'    */
         /* BINARY OPERANDS */
#define    BAND        26   /* 'BAND'     */
#define    BOR         27   /* 'BOR'      */
#define    BPLUS       28   /* 'BPLUS'    */
#define    BMINUS      29   /* 'BMINUS'   */
#define    BMULT       30   /* 'BMULT'    */
#define    BDIV        31   /* 'BDIV'     */
#define    BEXP        32   /* 'BEXP'     */
#define    BMOD        33   /* 'BMOD'     */
#define    BEQ         34   /* 'BEQ'      */
#define    BNE         35   /* 'BNE'      */
#define    BLE         36   /* 'BLE'      */
#define    BGE         37   /* 'BGE'      */
#define    BLT         38   /* 'BLT'      */
#define    BGT         39   /* 'BGT'      */
         /* OS SERVICE CALL OPERANDS */
#define    TRACEX      40   /* 'TRACEX'   */
#define    DUMPMEM     41   /* 'DUMPMEM'  */
#define    OSINPUT     42   /* 'INPUT'    */
#define    OSINPUTC    43   /* 'INPUT'    */
#define    OSOUTPUT    44   /* 'OUTPUT'   */
#define    OSOUTPUTC   45   /* 'OUTPUT'   */
#define    OSOUTPUTL   46   /* 'OUTPUTL'  */
#define    OSEOF       47   /* 'EOF'      */

         /* TREE NODE NAMES */
#define    ProgramNode  48   /* 'program'  */
#define    TypesNode    49   /* 'types'    */
#define    TypeNode     50   /* 'type'     */
#define    DclnsNode    51   /* 'dclns'    */
#define    VarNode      52   /* 'dcln'     */
#define    IntegerTNode 53   /* 'integer'  */
#define    BooleanTNode 54   /* 'boolean'  */
#define    BlockNode    55   /* 'block'    */
#define    AssignNode   56   /* 'assign'   */
#define    OutputNode   57   /* 'output'   */ 
#define    IfNode       58   /* 'if'       */
#define    WhileNode    59   /* 'while'    */
#define    NullNode     60   /* '<null>'   */

#define GTNode          61
#define LTNode          62
#define GTENode         63
#define NENode          64
#define EQNode          65
#define LTENode         66

#define PlusNode        67
#define MinusNode       68

#define ORNode          69
#define MODNode         70
#define ANDNode         71
#define MultiplyNode    72
#define DivisionNode    73

#define NOTNode         74
#define UnaryMinusNode  75
#define POWNode         76

#define ReadNode        77
#define EofNode         78
#define TrueNode        79
#define FalseNode       80

#define IntegerNode     81  /* '<integer>'*/
#define IdentifierNode  82/* '<identifier>'*/

#define RepeatNode      83  /* 'repeat' */
#define LoopNode        84  /* 'loop' */
#define ExitNode        85  /* 'exit' */
#define SwapNode        86  /* '<swap>' */
#define UptoNode        87  /* '<upto>' */

#define CaseNode        88
#define CaseClauseNode  89
#define RangeNode       90
#define OtherwiseNode   91
#define DownToNode      92

#define CharacterTNode  93
#define CharacterNode   94
#define ConstsNode      95
#define ConstNode       96
#define LitNode         97

#define SuccNode        98
#define PredNode        99
#define ChrNode        100
#define OrdNode        101
#define StringNode     102

#define NumberOfNodes  102 /* '<identifier>'*/
typedef int Mode;
typedef TreeNode UserType;

FILE *CodeFile;
char *CodeFileName;
Clabel HaltLabel;

UserType TypeInteger, TypeBoolean, TypeCharacter;

char *mach_op[] = 
    {"NOP","HALT","LIT","LLV","LGV","SLV","SGV","LLA","LGA",
     "UOP","BOP","POP","DUP","SWAP","CALL","RTN","GOTO","COND",
     "CODE","SOS","LIMIT","UNOT","UNEG","USUCC","UPRED","BAND",
     "BOR","BPLUS","BMINUS","BMULT","BDIV","BEXP","BMOD","BEQ",
     "BNE","BLE","BGE","BLT","BGT","TRACEX","DUMPMEM","INPUT",
     "INPUTC","OUTPUT","OUTPUTC","OUTPUTL","EOF"};

/****************************************************************** 
   add new node names to the end of the array, keeping in strict order
   as defined above, then adjust the j loop control variable in
   InitializeNodeNames(). 
*******************************************************************/
char *node_name[] = { "program", "types", "type", "dclns",
                 "var", "integer", "boolean", "block",
                 "assign", "output", "if", "while", 
                 "<null>", ">", "<", ">=",
		 "<>", "=", "<=", "+",
		 "-", "or", "mod", "and",
		 "*", "/", "not", "neg",
		      "pow", "read", "eof", "<true>", "<false>",
		      "<integer>", "<identifier>" ,
		      "repeat", "loop", "exit", "<swap>",
		      "<upto>", "case", "<case_clause>", "<range>",
		      "<otherwise>", "<downto>", "char", "<char>",
		      "<consts>", "const", "lit", "succ",
		      "pred", "chr", "ord", "<string>"
                };


void PutUpperLowerLimitOnStackForSuccPred(TreeNode T, Clabel CurrLabel, int PREDSUCC);

void CodeGenerate(int argc, char *argv[])
{
   int NumberTrees;

   InitializeCodeGenerator(argc,argv);
   Tree_File = Open_File("_TREE", "r"); 
   NumberTrees = Read_Trees();
   fclose (Tree_File);                     

   TypeBoolean = Child(Child (RootOfTree(1), 2),1);
   TypeInteger = Child(Child (RootOfTree(1), 2),2);
   TypeCharacter = Child(Child (RootOfTree(1), 2),3);

   HaltLabel = ProcessNode (RootOfTree(1), NoLabel);
   CodeGen0 (HALTOP, HaltLabel); 

   CodeFile = Open_File (CodeFileName, "w");
   DumpCode (CodeFile);
   fclose(CodeFile); 

   if (TraceSpecified)
      fclose (TraceFile);

/****************************************************************** 
  enable this code to write out the tree after the code generator
  has run.  It will show the new decorations made with MakeAddress().
*******************************************************************/


   Tree_File = fopen("_TREE", "w");  
   Write_Trees();
   fclose (Tree_File);                   
}


void InitializeCodeGenerator(int argc,char *argv[])
{
   InitializeMachineOperations();
   InitializeNodeNames();
   FrameSize = 0;
   CurrentProcLevel = 0;
   LabelCount = 0;
   CodeFileName = System_Argument("-code", "_CODE", argc, argv); 
}


void InitializeMachineOperations(void)
{
   int i,j;

   for (i=0, j=1; i < 47; i++, j++)
      String_Array_To_String_Constant (mach_op[i],j);
}



void InitializeNodeNames(void)
{
   int i,j;

   for (i=0, j=48; j <= NumberOfNodes; i++, j++)
      String_Array_To_String_Constant (node_name[i],j);
}



String MakeStringOf(int Number)
{
   Stack Temp;

   Temp = AllocateStack (50);
   ResetBufferInTextTable();
   if (Number == 0)
      AdvanceOnCharacter ('0');
   else
   {
      while (Number > 0)
      {
         Push (Temp,(Number % 10) + 48);
         Number /= 10;
      }

      while ( !(IsEmpty (Temp)))
         AdvanceOnCharacter ((char)(Pop(Temp)));
   }   
   return (ConvertStringInBuffer()); 
}  



void Reference(TreeNode T, Mode M, Clabel L)
{
  int AddrOrVal ,OFFSET, TypeMode;
   String  Op;

   AddrOrVal = Decoration(Decoration(T));
   OFFSET = FrameDisplacement (AddrOrVal) ;

   switch (M)
   {
      case LeftMode  :  DecrementFrameSize();
                        if (ProcLevel (AddrOrVal) == 0) 
                           Op = SGVOP;
                        else
                           Op = SLVOP;
	                break;
      case RightMode :  IncrementFrameSize();
                        if (ProcLevel (AddrOrVal) == 0) 
                           Op = LGVOP;
          	        else
                           Op = LLVOP;
			TypeMode = Decoration(Child(Decoration(T),1)); /* could be const, lit or var */
			if(NodeName(TypeMode) == ConstNode || NodeName(TypeMode) == LitNode){
			  Op = LITOP;
			};
                        break;
   }
    if(M == RightMode){
       if(NodeName(TypeMode) == LitNode){
         CodeGen1 (Op, MakeStringOf(OFFSET), L);
       }
       else if(NodeName(TypeMode) == ConstNode){
         CodeGen1 (Op, OFFSET, L);
       }
       else{
         CodeGen1 (Op,MakeStringOf(OFFSET),L);
       }
  } 
  else
  {
           CodeGen1 (Op,MakeStringOf(OFFSET),L);
  }
};

void GenerateCodeForEscapeSeqs(int ascii, Clabel CurrLabel){ 
  int asciiVal = -1;
  switch(ascii){
  case 't':
    asciiVal = 9;/*\t*/
    break;
  case 'n':
    asciiVal = 10;/*\n*/
    break;
  case 'a':
    asciiVal = 7; /*bell character \a*/
    break;
  case 'b':
    asciiVal = 8; /*backspace \b*/
    break;
  case 'f':
    asciiVal = 12; /*formfeed \f*/
    break;
  case 'r':
    asciiVal = 13; /*carriage return \r*/
    break;
  default:
    printf("INTERNAL ERROR UNRECOGNIZED ESCAPE SEQUENCE");
  };
  CodeGen1 (LITOP, MakeStringOf(asciiVal), CurrLabel);
};

int NKids (TreeNode T)
{
   return (Rank(T));

};

int IsInteger(int i){
  if((i >= 65 && i < 65+26) || (i >= 97 && i < 97+26))
    return 1;
    else 
      return 0;
  };
  
void ProcessOutputNodeForIdentifier(TreeNode T, Clabel CurrLabel){
  
  if(Decoration(Decoration(Child(Decoration(Child(T,1)), NKids(Decoration(Child(T,1)))))) == TypeInteger){
    CodeGen1 (SOSOP, OSOUTPUT, CurrLabel);
  }
  else if(Decoration(Decoration(Child(Decoration(Child(T,1)), NKids(Decoration(Child(T,1)))))) == TypeCharacter){
    CodeGen1 (SOSOP, OSOUTPUTC, CurrLabel);
  }
  else{
    printf("internal error cannot print identifier : %d", Decoration(Child(Decoration(Child(T,1)), NKids(Decoration(Child(T,1))))));
  };
};

void ProcessInputNodeForIdentifier(TreeNode T, Clabel CurrLabel){
  
  if(Decoration(Decoration(Child(Decoration(Child(T,1)), NKids(Decoration(Child(T,1)))))) == TypeInteger){
    CodeGen1 (SOSOP, OSINPUT, CurrLabel);
  }
  else if(Decoration(Decoration(Child(Decoration(Child(T,1)), NKids(Decoration(Child(T,1)))))) == TypeCharacter){
    CodeGen1 (SOSOP, OSINPUTC, CurrLabel);
  }
  else{
    printf("internal error cannot allow for read except for char and integer");
  };
};

void Expression (TreeNode T, Clabel CurrLabel)
{
   int Kid;
   Clabel Label1;

   if (TraceSpecified)
   {
      fprintf (TraceFile, "<<< CODE GENERATOR >>> Processing Node ");
      Write_String (TraceFile, NodeName (T) );
      fprintf (TraceFile, " , Label is  ");
      Write_String (TraceFile, CurrLabel);
      fprintf (TraceFile, "\n");
   }

   switch (NodeName(T))
   {
      case GTNode:
      case LTNode:
      case GTENode:
      case NENode:
      case EQNode:
      case LTENode :
      
         Expression ( Child(T,1) , CurrLabel);
         Expression ( Child(T,2) , NoLabel);
	 if(NodeName(T) == GTNode)
	   CodeGen1(BOPOP, BGT, NoLabel);
	 else if(NodeName(T) == LTNode)
	   CodeGen1(BOPOP, BLT, NoLabel);
         else if (NodeName(T) == GTENode)
            CodeGen1 (BOPOP, BGE, NoLabel);
	 else if (NodeName(T) == NENode)
	    CodeGen1 (BOPOP, BNE, NoLabel);
	 else if (NodeName(T) == EQNode)
	    CodeGen1 (BOPOP, BEQ, NoLabel);
         else if (NodeName(T) == LTENode)
            CodeGen1 (BOPOP, BLE, NoLabel);
         DecrementFrameSize();
         break;
   
      case PlusNode :
      case MinusNode :
      case ORNode :
      case MODNode :
      case ANDNode :
      case MultiplyNode :
      case DivisionNode :
      case POWNode :
         Expression ( Child(T,1) , CurrLabel);
	 Expression ( Child(T,2) , NoLabel);
	 if (NodeName(T) == PlusNode)
	   CodeGen1 (BOPOP, BPLUS, NoLabel);
	 else if(NodeName(T) == MinusNode)
            CodeGen1 (BOPOP, BMINUS, NoLabel);
	 else if(NodeName(T) == ORNode)
	   CodeGen1 (BOPOP, BOR, NoLabel);
	 else if(NodeName(T) == MODNode)
	   CodeGen1 (BOPOP, BMOD, NoLabel);
	 else if(NodeName(T) == ANDNode)
	   CodeGen1 (BOPOP, BAND, NoLabel);
	 else if(NodeName(T) == MultiplyNode)
	   CodeGen1 (BOPOP, BMULT, NoLabel);
	 else if(NodeName(T) == DivisionNode)
	   CodeGen1 (BOPOP, BDIV, NoLabel);
	 else if(NodeName(T) == POWNode)
	   CodeGen1 (BOPOP, BEXP, NoLabel);
	 DecrementFrameSize();
         break;

     case NOTNode:
	 Expression (Child(T,1) , CurrLabel);
	 CodeGen1(UOPOP, UNOT, NoLabel);
	 break;

      case UnaryMinusNode :
	 Expression (Child(T,1) , CurrLabel);
	 CodeGen1 (UOPOP, UNEG, NoLabel);
	 break;

   case EofNode:
     CodeGen1( SOSOP, OSEOF, CurrLabel);
     IncrementFrameSize();
     break;

      case IntegerNode :
         CodeGen1 (LITOP, NodeName (Child(T,1)), CurrLabel);
         IncrementFrameSize();
         break;

     case CharacterNode :
       CodeGen1 (LITOP, MakeStringOf(Character(NodeName(Child(T,1)),1)), CurrLabel);
         IncrementFrameSize();
         break;

      
      case IdentifierNode :
         Reference (T,RightMode,CurrLabel);
         break;
      case OrdNode:
	Expression(Child(T,1), CurrLabel);
	break;
	 
      case SuccNode:
	PutUpperLowerLimitOnStackForSuccPred(T, CurrLabel, USUCC);
	/*Expression(Child(T,1), CurrLabel);
	  CodeGen1(UOPOP, USUCC, NoLabel);*/
	break;

      case PredNode:
	PutUpperLowerLimitOnStackForSuccPred(T, CurrLabel, UPRED);
	/*Expression(Child(T,1), CurrLabel);
	  CodeGen1(UOPOP, UPRED, NoLabel);*/
	break;
      case ChrNode:
	Expression(Child(T,1), CurrLabel);
	
	break;

      default :
         ReportTreeErrorAt(T);
         printf ("<<< CODE GENERATOR >>> : UNKNOWN NODE NAME ");
         Write_String (stdout,NodeName(T));
         printf ("\n");

   } /* end switch */
} /* end Expression */


void PutUpperLowerLimitOnStackForSuccPred(TreeNode T, Clabel CurrLabel, int PREDSUCC){
  Expression(Child(T,1), CurrLabel);
  CodeGen1(UOPOP, PREDSUCC, NoLabel);
  if(NodeName(Decoration(T)) == TypeNode && NKids(Decoration(T)) > 1 && NodeName(Child(Decoration(T),2)) == LitNode){
    TreeNode LitTreeNode = Child(Decoration(T),2);
    CodeGen1(LITOP,MakeStringOf(0), NoLabel);
    CodeGen1(LITOP, MakeStringOf(Decoration(Child(LitTreeNode,NKids(LitTreeNode)))), NoLabel);
    CodeGen0(LIMITOP, NoLabel);
  }
};

Clabel ProcessNode(TreeNode T, Clabel CurrLabel)
{
  int Kid, Num, Mode, Type;
   Clabel Label1, Label2, Label3, LabelTemp, LabelLoop;

   if (TraceSpecified)
   {
      fprintf (TraceFile, "<<< CODE GENERATOR >>> Processing Node ");
      Write_String (TraceFile, NodeName (T) );
      fprintf (TraceFile, " , Label is  ");
      Write_String (TraceFile, CurrLabel);
      fprintf (TraceFile, "\n");
   }

   switch (NodeName(T))
   {
      case ProgramNode :
	/*CurrLabel = ProcessNode (Child(T,NKids(T)-2),CurrLabel);
	  CurrLabel = ProcessNode (Child(T,NKids(T)-1),NoLabel);*/
	for(Kid = 2; Kid < NKids(T); Kid++){
	  CurrLabel = ProcessNode(Child(T, Kid), CurrLabel);
	};
         return (CurrLabel);

      case TypesNode :
         for (Kid = 1; Kid <= NKids(T); Kid++)
            CurrLabel = ProcessNode (Child(T,Kid), CurrLabel);
         return (CurrLabel);

      case TypeNode :
	if(NKids(T) > 1){
	  if(NodeName(Child(T, 2)) == LitNode){
	    for(Kid = 1; Kid <= NKids(Child(T,2)); Kid++){
	      Decorate(Child(Child(T,2), Kid), Kid-1);
	    };
	  }
	};
         return (CurrLabel);

      case ConstsNode:
      case DclnsNode :
         for (Kid = 1; Kid <= NKids(T); Kid++)
            CurrLabel = ProcessNode (Child(T,Kid), CurrLabel);
         if (NKids(T) > 0)
            return (NoLabel);
         else
            return (CurrLabel);
      
      case VarNode :
         for (Kid = 1; Kid < NKids(T); Kid++)
         {
            if (Kid != 1)
               CodeGen1 (LITOP,MakeStringOf(0),NoLabel);
            else
               CodeGen1 (LITOP,MakeStringOf(0),CurrLabel);
            Num = MakeAddress();
            Decorate ( Child(T,Kid), Num);
            IncrementFrameSize();
         }
         return (NoLabel);                 

      case ConstNode :
	if(NodeName(Child(T,2)) == IdentifierNode){
	  Mode = Decoration(Child(Decoration(Child(T,2)),1));
	  if(NodeName(Mode) == ConstNode){
	    Decorate(Child(T,1), Decoration(Decoration(Child(T,2))));
	    if(NodeName(Child(Mode,2)) == IntegerNode || Decoration(Child(Mode,2)) == TypeInteger){
	      Decorate(Child(T,2), TypeInteger);
	    }
	    else if(NodeName(Child(Mode,2)) == CharacterNode || Decoration(Child(Mode,2)) == TypeInteger){
	      Decorate(Child(T,2), TypeCharacter);
	    }
	    else
	      printf("UNKOWN DATA TYPE FOR CONST NODE?\n");
	    /*if(NodeName(Child(Mode,2)) == IntegerNode){
	      Decorate(Child(T,2), TypeInteger);
	    }
	    else if(NodeName(Child(Mode,2)) == CharacterNode){
	      Decorate(Child(T,2), TypeCharacter);
	    }
	    else
	    printf("unknown data type for a const node ?\n");*/
	  }
	  else if(NodeName(Mode) == LitNode){
	    Decorate(Child(T,1),MakeStringOf(Decoration(Decoration(Child(T,2)))));
	    /*Decorate(Child(T,1),Decoration(Decoration(Child(T,2))));*/
	    Decorate(Child(T,2), TypeInteger);
	  }
	  else
	    printf("unknown node type in const node decoration\n");
	}
	else if(NodeName(Child(T,2)) == CharacterNode) {
	  /*printf("const Char is %d\n", Character(NodeName(Child(Child(T,2),1)), 1));*/
	  Decorate(Child(T,1), MakeStringOf(Character(NodeName(Child(Child(T,2),1)), 1)));
	  Decorate(Child(T,2), TypeCharacter);
	}
	else if(NodeName(Child(T,2)) == IntegerNode) {
	  /*printf("const Char is %d\n", NodeName(Child(Child(T,2),1)));*/
	  Decorate(Child(T,1), NodeName(Child(Child(T,2),1)));
	  Decorate(Child(T,2), TypeInteger);
	}
	return (NoLabel);

      case BlockNode :
         for (Kid = 1; Kid <= NKids(T); Kid++)
            CurrLabel = ProcessNode (Child(T,Kid), CurrLabel);
         return (CurrLabel); 


      case AssignNode :
         Expression (Child(T,2), CurrLabel);
         Reference (Child(T,1), LeftMode, NoLabel);
         return (NoLabel);

      case OutputNode : 
         for (Kid = 1; Kid <= NKids(T); Kid++)
         {
	   if(Kid > 1){
	     CurrLabel = NoLabel;
	   };
            
	   if(NodeName(Child(T,Kid)) == StringNode){
	     int n =2;
	     while(Character(NodeName(Child(Child(T,Kid),1)),n) != '"'){	       
	       if(n > 2)
		 CurrLabel = NoLabel;
	       if(Character(NodeName(Child(Child(T,Kid),1)),n) == '\\' && Character(NodeName(Child(Child(T,Kid),1)),n+1)!= '"' ){
		 GenerateCodeForEscapeSeqs(Character(NodeName(Child(Child(T,Kid),1)),n+1), CurrLabel);
		 n++;
	       }
	       else{
		 CodeGen1 (LITOP, MakeStringOf(Character(NodeName(Child(Child(T,Kid),1)),n)), CurrLabel);	  
	       };
	       CodeGen1 (SOSOP, OSOUTPUTC, NoLabel);
	       n++;
	     };
	     IncrementFrameSize();	     
	   }
	   else {
	      Expression (Child(T,Kid), CurrLabel);
	    if(NodeName(Child(T,Kid)) == CharacterNode)
	      CodeGen1 (SOSOP, OSOUTPUTC, NoLabel);
	    else if(NodeName(Child(T,Kid)) == IntegerNode)
	      CodeGen1 (SOSOP, OSOUTPUT, NoLabel);
	    else if(NodeName(Child(T,Kid)) == IdentifierNode){
	      if(NodeName(Decoration(Child(Decoration(Child(T, Kid)),1))) == ConstNode){
		Type = Decoration(Child(Decoration(Child(Decoration(Child(T, Kid)),1)),2));
		if(Type == TypeInteger)
		  CodeGen1 (SOSOP, OSOUTPUT, NoLabel);
		else if(Type == TypeCharacter)
		  CodeGen1 (SOSOP, OSOUTPUTC, NoLabel);
		else
		  printf("Error in decorating CONST NODES ? Type is : %d, TypeInteger is : %d, TypeCharacter is : %d\n", Type, TypeInteger, TypeCharacter);
		
		/*if(NodeName(Child(Decoration(Child(Decoration(Child(T, Kid)),1)),2)) == CharacterNode){
		  CodeGen1 (SOSOP, OSOUTPUTC, NoLabel);
		}
		else if(NodeName(Child(Decoration(Child(Decoration(Child(T, Kid)),1)),2)) == IntegerNode){
		  CodeGen1 (SOSOP, OSOUTPUT, NoLabel);
		}
		else if(NodeName(Child(Decoration(Child(Decoration(Child(T, Kid)),1)),2)) == IdentifierNode){
		  TreeNode dclnTreeNode = Decoration(Child(Decoration(Child(Decoration(Child(T, Kid)),1)),2));
		  ProcessOutputNodeForIdentifier(dclnTreeNode, NoLabel);
		}
		else
		  printf("1Oops internal error in output node for kid: %d\n", Kid);
		*/
	      }
	      else if(NodeName(Decoration(Child(Decoration(Child(T, Kid)),1))) == VarNode){
		TreeNode dclnTreeNode = Decoration(Child(T, Kid));
		ProcessOutputNodeForIdentifier(dclnTreeNode, NoLabel);
	      }
	      else{
		printf("2Oops internal error in output node for kid: %d\n", Kid);
	      };
	    }
	    else if(Decoration(Child(T, Kid)) == TypeCharacter){
	      CodeGen1 (SOSOP, OSOUTPUTC, NoLabel);
	    }
	    else if(Decoration(Child(T, Kid)) == TypeInteger){
	      CodeGen1 (SOSOP, OSOUTPUT, NoLabel);
	    }
	    else{
	      CodeGen1 (SOSOP, OSOUTPUT, NoLabel);
	      /*printf("3Oops internal error in output node for kid: %d\n", Kid);*/
	    };
	   };
            DecrementFrameSize();
         }
         CodeGen1 (SOSOP, OSOUTPUTL, NoLabel);
         return (NoLabel);

      case IfNode :
         Expression (Child(T,1), CurrLabel);
         Label1 = MakeLabel();
         Label2 = MakeLabel();
         Label3 = MakeLabel();
         CodeGen2 (CONDOP,Label1,Label2, NoLabel);
         DecrementFrameSize();
         CodeGen1 (GOTOOP, Label3, ProcessNode (Child(T,2), Label1) );
         if (Rank(T) == 3)
            CodeGen0 (NOP, ProcessNode (Child(T,3),Label2));
         else
            CodeGen0 (NOP, Label2);
	 CodeGen0(NOP, Label3);
	 return (NoLabel);
         /*return (Label3);                */


      case WhileNode :
         if (CurrLabel == NoLabel) 
            Label1 = MakeLabel();
         else 
            Label1 = CurrLabel;
         Label2 = MakeLabel();
         Label3 = MakeLabel();
         Expression (Child(T,1), Label1);
         CodeGen2 (CONDOP, Label2, Label3, NoLabel);
         DecrementFrameSize();
         CodeGen1 (GOTOOP, Label1, ProcessNode (Child(T,2), Label2) );
         return (Label3);


      case RepeatNode:
        if (CurrLabel == NoLabel){
            Label2 = MakeLabel();
	    CurrLabel = Label2;
	}
	else
            Label2 = CurrLabel;
	for (Kid = 1; Kid <= NKids(T)-1; Kid++)
	  CurrLabel = ProcessNode (Child(T,Kid), CurrLabel);
	Expression(Child(T,NKids(T)), CurrLabel);
	Label1 = MakeLabel();
	CodeGen2 (CONDOP, Label1, Label2, NoLabel);
	DecrementFrameSize();
	return (Label1);

      case LoopNode:
	if (CurrLabel == NoLabel){
            Label2 = MakeLabel();
	    CurrLabel = Label2;
	}
	else
            Label2 = CurrLabel;
	LabelLoop = MakeLabel();/*for decoration of the LoopNode so as to pass this to the next operation */
	Decorate(T, LabelLoop);
	for (Kid = 1; Kid <= NKids(T); Kid++)
	  CurrLabel = ProcessNode (Child(T,Kid), CurrLabel);
	CodeGen1(GOTOOP, Label2, CurrLabel);
	/*printf("Decoration of LoopNode is : %d\n", Decoration(T));
	  printf("Decoration of Label1:%d", Label1);*/
	/* I need a way for the loop Node to remember if it has atleast one exit in it so as to decide if to pass NoLabel or Label1 */
	CodeGen1(GOTOOP, LabelLoop, NoLabel);
        return (LabelLoop);
     
      case ExitNode:
	Label1 = Decoration(Decoration(T));
	CodeGen1(GOTOOP, Label1, CurrLabel);
	return (NoLabel);

      case SwapNode:
	Reference (Child(T,1), RightMode, CurrLabel);
	Reference (Child(T,2), RightMode, NoLabel);
	CodeGen0(SWAPOP, NoLabel);
	Reference (Child(T,2), LeftMode, NoLabel);
	Reference (Child(T,1), LeftMode, NoLabel);
	return (NoLabel);

     case UptoNode:
        Expression(Child(T,3), CurrLabel);
	Expression (Child(T,2), NoLabel);
        Reference (Child(T,1), LeftMode, NoLabel);
	Label1 = MakeLabel();
	Label2 = MakeLabel();
	Label3 = MakeLabel();
	CodeGen0(DUPOP, Label1);
	Reference (Child(T,1), RightMode, NoLabel);
	CodeGen1 (BOPOP, BGE, NoLabel);
	CodeGen2 (CONDOP, Label2, Label3, NoLabel);
	/*CodeGen0(NOP, Label2);*/

	CurrLabel = ProcessNode(Child(T, 4), Label2);

	Reference (Child(T,1), RightMode, CurrLabel);
	CodeGen1(UOPOP, USUCC, NoLabel);
	Reference (Child(T,1), LeftMode, NoLabel);
	CodeGen1(GOTOOP, Label1, NoLabel);
	CodeGen1(POPOP, MakeStringOf(1), Label3);
	CodeGen1(LITOP, MakeStringOf(0), NoLabel);
	Reference (Child(T,1), LeftMode, NoLabel);
       return (NoLabel);

     case DownToNode:
       Expression(Child(T,3), CurrLabel);
       Expression (Child(T,2), NoLabel);
        Reference (Child(T,1), LeftMode, NoLabel);
	Label1 = MakeLabel();
	Label2 = MakeLabel();
	Label3 = MakeLabel();
	CodeGen0(DUPOP, Label1);
	Reference (Child(T,1), RightMode, NoLabel);
	CodeGen1 (BOPOP, BLE, NoLabel);
	CodeGen2 (CONDOP, Label2, Label3, NoLabel);

	CurrLabel = ProcessNode(Child(T, 4), Label2);

	Reference (Child(T,1), RightMode, CurrLabel);
	CodeGen1(UOPOP, UPRED, NoLabel);
	Reference (Child(T,1), LeftMode, NoLabel);
	CodeGen1(GOTOOP, Label1, NoLabel);
	CodeGen1(POPOP, MakeStringOf(1), Label3);
	CodeGen1(LITOP, MakeStringOf(0), NoLabel);
	Reference (Child(T,1), LeftMode, NoLabel);
     return (NoLabel);

   case CaseNode:
     Expression(Child(T,1), CurrLabel);
     LabelTemp = MakeLabel();
     Label3 = NoLabel;

     for(Kid = 2; Kid <= NKids(T); Kid++)
       {
	if(NodeName(Child(T, Kid)) != OtherwiseNode)
	  {
	    CodeGen0(DUPOP, Label3);
	    if(NodeName(Child(Child(T, Kid),1)) == IntegerNode){
	      CodeGen1(LITOP, NodeName(Child(Child(Child(T, Kid),1),1)) , NoLabel);
	      CodeGen1(BOPOP, BEQ, NoLabel);
	    }
	    else if(NodeName(Child(Child(T, Kid),1)) == RangeNode){
	      CodeGen0(DUPOP, NoLabel);
	      /*CodeGen1(LITOP, NodeName(Child(Child(Child(Child(T, Kid),1),1), 1)), NoLabel);*/
	      Expression(Child(Child(Child(T, Kid),1),1), NoLabel);
	      CodeGen1(BOPOP, BGE, NoLabel);
	      CodeGen0(SWAPOP, NoLabel);
	      Expression(Child(Child(Child(T, Kid),1),2), NoLabel);
	      /*CodeGen1(LITOP, NodeName(Child(Child(Child(Child(T, Kid),1),2), 1)), NoLabel);*/
	      CodeGen1(BOPOP, BLE, NoLabel);
	      CodeGen1(BOPOP, BAND, NoLabel);
	    }
	    else{
	      /*printf("unknown node found in case \n");/* output error */
	      Expression(Child(Child(T, Kid),1), NoLabel);
	      CodeGen1(BOPOP, BEQ, NoLabel);
	    };
	    Label1 = MakeLabel();
	    Label2 = MakeLabel();
	    CodeGen2(CONDOP, Label1, Label2, NoLabel);
	    CodeGen1(POPOP, MakeStringOf(1), Label1);
	    
	    CurrLabel = ProcessNode(Child(Child(T, Kid), 2), NoLabel);

	    CodeGen1(GOTOOP, LabelTemp, CurrLabel);

	    Label3 = Label2;
	  }
       };
     
     CodeGen1(POPOP, MakeStringOf(1), Label2);
     if(NodeName(Child(T, NKids(T))) == OtherwiseNode)
       {
	 CurrLabel = ProcessNode(Child(Child(T, NKids(T)),1), NoLabel);
	 if(CurrLabel == NoLabel)
	   {
	     CodeGen0(NOP, CurrLabel);
	   };
       };
     /*take care of other wise node */
     return (LabelTemp);
       

     
      case ReadNode :
	for(Kid = 1; Kid <= NKids(T); Kid++){	  
	  if(Kid != 1){
	    CurrLabel = NoLabel;
	  };
	  ProcessInputNodeForIdentifier(Decoration(Child(T, Kid)), CurrLabel);
	    /*CodeGen1 (SOSOP, OSINPUT, CurrLabel);*/
	 Reference (Child(T,Kid), LeftMode, NoLabel);
	};
	 return (NoLabel);


       case NullNode : return(CurrLabel);
   

      default :
              ReportTreeErrorAt(T);
              printf ("<<< CODE GENERATOR >>> : UNKNOWN NODE NAME ");
              Write_String (stdout,NodeName(T));
              printf ("\n");

   } /* end switch */
};   /* end ProcessNode */
