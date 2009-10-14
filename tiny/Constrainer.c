/****************************************************************
              Copyright (C) 1986 by Manuel E. Bermudez
              Translated to C - 1991
*****************************************************************/

#include <stdio.h>
#include <header/Open_File.h>
#include <header/CommandLine.h>
#include <header/Table.h>
#include <header/Text.h>
#include <header/Error.h>
#include <header/String_Input.h> 
#include <header/Tree.h>
#include <header/Dcln.h>
#include <header/Constrainer.h>

#define ProgramNode    1
#define TypesNode      2
#define TypeNode       3
#define DclnsNode      4
#define DclnNode       5
#define IntegerTNode   6
#define BooleanTNode   7
#define BlockNode      8
#define AssignNode     9
#define OutputNode     10
#define IfNode         11
#define WhileNode      12
#define NullNode       13

#define GTNode         14
#define LTNode         15
#define GTENode        16
#define NENode         17
#define EQNode         18
#define LTENode        19

#define PlusNode       20
#define MinusNode      21

#define ORNode         22
#define MODNode        23
#define ANDNode        24
#define MultiplyNode   25
#define DivisionNode   26

#define NOTNode        27
#define UnaryMinusNode 28
#define POWNode        29

#define ReadNode       30
#define EofNode        31
#define TrueNode       32
#define FalseNode      33
#define IntegerNode    34
#define IdentifierNode 35

#define RepeatNode     36
#define LoopNode       37
#define ExitNode       38
#define SwapNode       39
#define UptoNode       40
#define CaseNode       41
#define CaseClauseNode 42
#define RangeNode      43

#define OtherwiseNode  44

#define NumberOfNodes  44

typedef TreeNode UserType;

/****************************************************************
 Add new node names to the end of the array, keeping in strict
  order with the define statements above, then adjust the i loop
  control variable in InitializeConstrainer().
*****************************************************************/
char *node[] = { "program", "types", "type", "dclns",
                 "dcln", "integer", "boolean", "block",
                 "assign", "output", "if", "while", 
                 "<null>", ">", "<", ">=",
		 "<>", "=", "<=", "+",
		 "-", "or", "mod", "and",
		 "*", "/", "not", "neg",
		 "pow", "read", "eof", "<true>", "<false>",
		 "<integer>", "<identifier>",
		 "repeat", "loop", "exit", "<swap>", "<upto>", "case", "<case_clause>", "<range>", "<otherwise>"
                };


UserType TypeInteger, TypeBoolean;
boolean TraceSpecified;
FILE *TraceFile;
char *TraceFileName;
int NumberTreesRead, index;


void Constrain(void)    
{
   int i;
   InitializeDeclarationTable();
   Tree_File = Open_File("_TREE", "r"); 
   NumberTreesRead = Read_Trees();
   fclose (Tree_File);                     

   AddIntrinsics();

#if 0
   printf("CURRENT TREE\n");
   for (i=1;i<=SizeOf(Tree);i++)
      printf("%2d: %d\n",i,Element(Tree,i));
#endif

   ProcessNode(RootOfTree(1)); 

    
   Tree_File = fopen("_TREE", "w");  
   Write_Trees();
   fclose (Tree_File);                   

   if (TraceSpecified)
      fclose(TraceFile);    
}


void InitializeConstrainer (int argc, char *argv[])
{          
   int i, j;

   InitializeTextModule();
   InitializeTreeModule();

   for (i=0, j=1; i<NumberOfNodes; i++, j++)
      String_Array_To_String_Constant (node[i], j); 
 
   index = System_Flag ("-trace", argc, argv);
 
   if (index)                                       
   {
      TraceSpecified = true; 
      TraceFileName = System_Argument ("-trace", "_TRACE", argc, argv);
      TraceFile = Open_File(TraceFileName, "w");
   }
   else
      TraceSpecified = false;          
}                        


void AddIntrinsics (void)
{
   TreeNode TempTree;

   AddTree (TypesNode, RootOfTree(1), 2);

   TempTree = Child (RootOfTree(1), 2);
   AddTree (TypeNode, TempTree, 1);

   TempTree = Child (RootOfTree(1), 2);
   AddTree (TypeNode, TempTree, 1);

   TempTree = Child (Child (RootOfTree(1), 2), 1);
   AddTree (BooleanTNode, TempTree, 1);
 
   TempTree = Child (Child (RootOfTree(1), 2), 2);
   AddTree (IntegerTNode, TempTree, 1);
}

void PrintHeader(TreeNode T, char * message)
{
   printf (message);
   Write_String (stdout,SourceLocation(T));
   printf (" : ");
   printf ("\n");
}

void ErrorHeader (TreeNode T)
{ 
   PrintHeader(T, "<<< CONSTRAINER ERROR >>> AT ");
}

void WarningHeader (TreeNode T)
{ 
  PrintHeader(T, "<<< CONSTRAINER WARNING >>> AT ");
}

int NKids (TreeNode T)
{
   return (Rank(T));
}



UserType Expression (TreeNode T)
{
   UserType Type1, Type2;
   TreeNode Declaration, Temp1, Temp2;
   int NodeCount;

   if (TraceSpecified)
   {
      fprintf (TraceFile, "<<< CONSTRAINER >>> : Expn Processor Node ");
      Write_String (TraceFile, NodeName(T));
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
         Type1 = Expression (Child(T,1));
         Type2 = Expression (Child(T,2));

         if (Type1 != Type2)
         {
            ErrorHeader(Child(T,1));
            printf ("ARGUMENTS OF '>=', '<','>', '<=', '=' and '<>' MUST BE TYPE INTEGER\n");
            printf ("\n");
         }
         return (TypeBoolean);

      case NOTNode :
	Type1 = Expression (Child(T,1));
	if (Type1 != TypeBoolean)
	  {
            ErrorHeader(Child(T,1));
            printf ("ARGUMENTS OF 'not' MUST BE TYPE BOOLEAN\n");
            printf ("\n");
	  }
	return (TypeBoolean);

      /* this has to be strictly boolean as the interpreter is expecting strictly 1 or 0 as the two expression results */
      case ORNode :
      case ANDNode :
	 Type1 = Expression (Child(T,1));
         Type2 = Expression (Child(T,2));
	 if (Type1 != TypeBoolean || Type2 != TypeBoolean)
         {
            ErrorHeader(Child(T,1));
            printf ("ARGUMENTS OF 'or', 'and' ");
            printf ("MUST BE TYPE BOOLEAN\n");
            printf ("\n");
         }
         return (TypeBoolean);
	 

      case PlusNode :
      case MinusNode :
      case MODNode :       
      case MultiplyNode :
      case DivisionNode :
      case UnaryMinusNode :
      case POWNode:
         Type1 = Expression (Child(T,1));

         if (Rank(T) == 2)
            Type2 = Expression (Child(T,2));
         else  
            Type2 = TypeInteger;

         if (Type1 != TypeInteger || Type2 != TypeInteger)
         {
            ErrorHeader(Child(T,1));
            printf ("ARGUMENTS OF '+', '-', 'mod', '*', '/', unary '-', '**' ");
            printf ("MUST BE TYPE INTEGER\n");
            printf ("\n");
         }
         return (TypeInteger);

      case ReadNode :
         return (TypeInteger);

     case EofNode:
         return (TypeBoolean);

      case IntegerNode : 
         return (TypeInteger);

      case TrueNode : 
      case FalseNode :
         return (TypeBoolean);

      case IdentifierNode :
         Declaration = Lookup (NodeName(Child(T,1)), T);
         if (Declaration != NullDeclaration)
         {
            Decorate (T, Declaration);
            return (Decoration(Declaration));
         }
         else
            return (TypeInteger);

   case RangeNode:
     Type1 = Expression(Child(T,1));
     Type2 = Expression(Child(T,2));
     if(Type1 != Type2 || Type1 != TypeInteger){
       ErrorHeader(T);
       printf ("RANGE OPERATOR MUST BE OF TYPE INTEGER");
       printf ("\n");
     }
     return (TypeInteger);

      default :
         ErrorHeader(T);
         printf ( "UNKNOWN NODE NAME ");
         Write_String (stdout,NodeName(T));
         printf ("\n");

   }  /* end switch */
}  /* end Expression */




void ProcessNode (TreeNode T) 
{
   int Kid, N;
   String Name1, Name2;
   TreeNode Type1, Type2, Type3, Temp;

   if (TraceSpecified)
   {
      fprintf (TraceFile,
               "<<< CONSTRAINER >>> : Stmt Processor Node ");
      Write_String (TraceFile, NodeName(T));
      fprintf (TraceFile, "\n");
   }

   switch (NodeName(T))
   {
      case ProgramNode : 
         OpenScope();
	 /* for loop context */
	 DTEnter("<for_ctxt>", T, T);
	 DTEnter("<loop_ctxt>", T, T);
         Name1 = NodeName(Child(Child(T,1),1));
         Name2 = NodeName(Child(Child(T,NKids(T)),1));

         if (Name1 != Name2)
         {
           ErrorHeader(T);
           printf ("PROGAM NAMES DO NOT MATCH\n");
           printf ("\n");
         }

         for (Kid = 2; Kid <= NKids(T)-1; Kid++)
            ProcessNode (Child(T,Kid));
         CloseScope();
         break;


      case TypesNode :  
         for (Kid = 1; Kid <= NKids(T); Kid++)
            ProcessNode (Child(T,Kid));
         TypeBoolean = Child(T,1);
         TypeInteger = Child(T,2);
         break;


      case TypeNode :
         DTEnter (NodeName(Child(T,1)),T,T);
         break;


      case DclnsNode :
         for (Kid = 1; Kid <= NKids(T); Kid++)
            ProcessNode (Child(T,Kid));
         break;


      case DclnNode :

	 Name1 = NodeName (Child(T, NKids(T)));

         Type1 = Lookup (Name1,T);

         for (Kid  = 1; Kid < NKids(T); Kid++)
         {
            DTEnter (NodeName(Child(Child(T,Kid),1)), Child(T,Kid), T);
            Decorate (Child(T,Kid), Type1);

         }
         break;


      case BlockNode :
         for (Kid = 1; Kid <= NKids(T); Kid++)
            ProcessNode (Child(T,Kid));
         break;


      case AssignNode :
	 Temp = Lookup("<for_ctxt>", T);
	 while(NodeName(Temp) != ProgramNode)
	   {
	     if(NodeName(Child(Child(Temp, 1), 1)) == NodeName(Child(Child(T, 1), 1)))
	       {
		 ErrorHeader(T);
		 printf ("CANNOT ASSIGN FOR-LOOP VARIABLE\n");
		 printf ("\n");
	       }
	       Temp = Decoration(Temp);
	   };
         Type1 = Expression (Child(T,1));
         Type2 = Expression (Child(T,2));

         if (Type1 != Type2)
         {
            ErrorHeader(T);
            printf ("ASSIGNMENT TYPES DO NOT MATCH\n");
            printf ("\n");
         }
         break;


      case OutputNode :
         for (Kid = 1; Kid <= NKids(T); Kid++)
            if (Expression (Child(T,Kid)) != TypeInteger)
            {
               ErrorHeader(T);
               printf ("OUTPUT EXPRESSION MUST BE TYPE INTEGER\n");
               printf ("\n");
            }
         break;


      case IfNode :
         if (Expression (Child(T,1)) != TypeBoolean)
         {
            ErrorHeader(T);
            printf ("CONTROL EXPRESSION OF 'IF' STMT");
            printf (" IS NOT TYPE BOOLEAN\n");
            printf ("\n");
         } 

         ProcessNode (Child(T,2));
         if (Rank(T) == 3)
            ProcessNode (Child(T,3));
         break;


      case WhileNode :
         if (Expression (Child(T,1)) != TypeBoolean)
         {
            ErrorHeader(T);
            printf ("WHILE EXPRESSION NOT OF TYPE BOOLEAN\n");
            printf ("\n");
         }
         ProcessNode (Child(T,2));
         break;

      case RepeatNode:
         for(Kid = 1; Kid <= NKids(T)-1; Kid++){
          ProcessNode(Child(T,Kid));
         };
         if (Expression (Child(T,NKids(T))) != TypeBoolean)
         {
            ErrorHeader(T);
            printf ("REPEAT EXPRESSION NOT OF TYPE BOOLEAN\n");
            printf ("\n");
         };
	 break;

   case LoopNode:
     OpenScope();
     DTEnter("<loop_ctxt>", T, T);
     for(Kid = 1; Kid <= NKids(T); Kid++){
       ProcessNode(Child(T,Kid));
     };
     CloseScope();
     if(Decoration(T)== 0){
       WarningHeader(T);
       printf("NO 'exit' FROM 'LOOP'.");
       printf("\n");
     }
     break;

   case ExitNode:
     Temp = Lookup("<loop_ctxt>", T);
     if(NodeName(Temp) != LoopNode)
       {
	 ErrorHeader(T);
	 printf("'exit' CAN ONLY BE INSIDE A 'loop' statement");
	 printf("\n");
       }
     else
       {
	 Decorate(T, Temp);
	 Decorate(Temp, T);
       };
     break;

   case SwapNode:
         Temp = Lookup("<for_ctxt>", T);
	 while(NodeName(Temp) != ProgramNode)
	   {
	     if(NodeName(Child(Child(Temp, 1), 1)) == NodeName(Child(Child(T, 1), 1)))
	       {
		 ErrorHeader(T);
		 printf ("CANNOT SWAP WITH LOOP CONTROL VARIABLE\n");
		 printf ("\n");
	       }
	       Temp = Decoration(Temp);
	   };
         Type1 = Expression (Child(T,1));
         Type2 = Expression (Child(T,2));

         if (Type1 != Type2)
         {
            ErrorHeader(T);
            printf ("SWAP TYPES DO NOT MATCH\n");
            printf ("\n");
         }
         break;

   case UptoNode:
        Temp = Lookup("<for_ctxt>", T);
	Decorate(T, Temp);
	OpenScope();
	DTEnter("<for_ctxt>", T);
	DTEnter("<loop_ctxt>", T);
	Type1 = Expression(Child(T, 1));
	Type2 = Expression(Child(T, 2));
	Type3 = Expression(Child(T, 3));
	if(Type1 != Type2 || Type2 != Type3)
	  {
	    ErrorHeader(T);
            printf ("FOR LOOP VARIABLE DOESN'T MATCH THE START VALUE\n");
            printf ("\n");
	  };
	ProcessNode(Child(T, 4));
	while(NodeName(Temp)!= ProgramNode)
	  {
	    if(NodeName(Child(Child(Temp,1), 1)) == NodeName(Child(Child(T, 1),1)))
	      {
		ErrorHeader(T);
		printf ("CANNOT RE-USE A LOOP CONTROL VARIABLE\n");
		printf ("\n");
	      }
	      Temp = Decoration(Temp);
	  };
	CloseScope();
     break;

   case CaseNode:
     Type1 = Expression(Child(T,1));
     for(Kid = 2; Kid <= NKids(T); Kid++){
       if(NodeName(Child(T, Kid)) == CaseClauseNode){
	 Type2 = Expression(Child(Child(T,Kid), 1)); 
	 if(Type2 != Type1){
	   ErrorHeader(Child(Child(T,Kid), 1));
	   printf("CASE CLAUSE NOT OF TYPE OF THE CASE EXPRESSION");
	   printf("\n");
	 };

	 ProcessNode(Child(Child(T,Kid), 2)); 
       }
       else if(NodeName(Child(T, Kid)) == OtherwiseNode)
	 {
	   ProcessNode(Child(Child(T,Kid), 1)); 
	 }
       else {/* machine error  */};
     };
     break;

      case NullNode :  
         break;

      default :
         ErrorHeader(T);
         printf ("UNKNOWN NODE NAME ");
         Write_String (stdout,NodeName(T));
         printf ("\n");

   }  /* end switch */
}  /* end ProcessNode */
