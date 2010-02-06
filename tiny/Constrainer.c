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
#define VarNode        5
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
#define DownToNode     45

#define CharacterTNode 46
#define CharacterNode  47
#define ConstsNode     48
#define ConstNode      49
#define LitNode        50
#define SuccNode       51
#define PredNode       52
#define ChrNode        53
#define OrdNode        54
#define StringNode     55

#define SubProgsNode   56 
#define FunctionNode   57
#define ProcedureNode  58
#define ParamsNode     59
#define ReturnNode     60
#define CallNode       61

#define NumberOfNodes  61

typedef TreeNode UserType;

/****************************************************************
 Add new node names to the end of the array, keeping in strict
  order with the define statements above, then adjust the i loop
  control variable in InitializeConstrainer().
*****************************************************************/
char *node[] = { "program", "types", "type", "dclns",
                 "var", "integer", "boolean", "block",
                 "assign", "output", "if", "while", 
                 "<null>", ">", "<", ">=",
		 "<>", "=", "<=", "+",
		 "-", "or", "mod", "and",
		 "*", "/", "not", "neg",
		 "pow", "read", "eof", "true", "false",
		 "<integer>", "<identifier>",
		 "repeat", "loop", "exit", "<swap>", 
		 "<upto>", "case", "<case_clause>", "<range>",
		 "<otherwise>", "<downto>", "char", "<char>",
		 "<consts>", "const", "lit", "succ",
		 "pred", "chr", "ord", "<string>",
		 "<subprogs>", "<fnc>", "<prc>", "<params>",
		 "<return>", "<call>" 
                };


UserType TypeInteger, TypeBoolean, TypeCharacter;
boolean TraceSpecified;
FILE *TraceFile;
char *TraceFileName;
int NumberTreesRead, index;


TreeNode GetMode(TreeNode);
void CheckModeForAssignmentIdentifier(TreeNode);
void AnnounceContext(TreeNode);

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

#define GetTypesTree TypesTree = Child (RootOfTree(1), 2); /*typesnode*/

void AddIntrinsics (void)
{
  TreeNode LitTree, TypesTree, TypeBoolTree, TypeIntTree, TypeCharTree;

   AddTree (TypesNode, RootOfTree(1), 2);
 
   /*bool*/
   TypesTree = Child (RootOfTree(1), 2);
   AddTree (TypeNode, TypesTree, 1);
   TypesTree = Child (RootOfTree(1), 2);
   TypeBoolTree = Child(Child (RootOfTree(1), 2), 1);
   AddTree(IdentifierNode, TypeBoolTree, 1);
   TypeBoolTree = Child(Child (RootOfTree(1), 2), 1);
   AddTree(BooleanTNode, Child(TypeBoolTree, 1), 1);
   TypeBoolTree = Child(Child (RootOfTree(1), 2), 1);
   
   AddTree(LitNode, TypeBoolTree, 2);
   TypeBoolTree = Child(Child (RootOfTree(1), 2), 1);
   LitTree = Child(Child(Child (RootOfTree(1), 2), 1), 2);
   AddTree(IdentifierNode, LitTree, 1);
   LitTree = Child(Child(Child (RootOfTree(1), 2), 1), 2);
   AddTree(FalseNode, Child( Child(Child(Child (RootOfTree(1), 2), 1), 2), 1), 1);

   LitTree = Child(Child(Child (RootOfTree(1), 2), 1), 2);
   AddTree(IdentifierNode, LitTree, 2);
   LitTree = Child(Child(Child (RootOfTree(1), 2), 1), 2);
   AddTree(TrueNode, Child(LitTree, 2), 1);

   /*int*/
   TypesTree = Child (RootOfTree(1), 2);
   AddTree (TypeNode, TypesTree, 2);
   TypesTree = Child (RootOfTree(1), 2);
   TypeIntTree = Child(Child (RootOfTree(1), 2), 2);
   AddTree(IdentifierNode, TypeIntTree, 1);
   TypeIntTree = Child(Child (RootOfTree(1), 2), 2);
   AddTree(IntegerTNode, Child(TypeIntTree, 1), 1);

   /*char*/
   TypesTree = Child (RootOfTree(1), 2);
   AddTree (TypeNode, TypesTree, 3);
   TypesTree = Child (RootOfTree(1), 2);
   TypeCharTree = Child(Child (RootOfTree(1), 2), 3);
   AddTree(IdentifierNode, TypeCharTree, 1);
   TypeCharTree = Child(Child (RootOfTree(1), 2), 3);
   AddTree(CharacterTNode, Child(TypeCharTree, 1), 1);


   TypeBoolean = Child(Child (RootOfTree(1), 2),1);
   TypeInteger = Child(Child (RootOfTree(1), 2),2);
   TypeCharacter = Child(Child (RootOfTree(1), 2),3);

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
   TreeNode Declaration, Temp1, Temp2, Mode, Mode1, Mode2;
   int NodeCount, Kid, i;

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
            printf ("ARGUMENTS OF '>=', '<','>', '<=', '=' and '<>' MUST BE OF SAME TYPE\n");
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
     
      case EofNode:
         return (TypeBoolean);

      case IntegerNode : 
         return (TypeInteger);

      case CharacterNode:
       return (TypeCharacter);

      case IdentifierNode :
	Declaration = Lookup (NodeName(Child(T,1)), T);	  
	Mode = NodeName(Decoration(Child(Declaration, 1)));
	 
         if (Declaration != NullDeclaration)
         {
            Decorate (T, Declaration);
	    
	    if(Mode == TypeNode){
	      ErrorHeader(T);
	      printf ("CANNOT HAVE A TYPE IN EXPRESSIONS");
	      printf ("\n");
	    }
	    else if(Mode == VarNode){
	      if(Decoration(Declaration) == TypeBoolean)
		return (TypeBoolean);
	      else if(NodeName(Decoration(Declaration)) == TypeNode && NKids(Decoration(Declaration)) >1  && NodeName(Child(Decoration(Declaration),2) ) == LitNode){
		return (Decoration(Declaration));
		/*return (TypeInteger);*/
	      }
	      else{
		return (Decoration(Declaration));
		/*printf("Internal Error Cannot decide the type\n");*/
	      };
	    }
	    else if(Decoration(Declaration) == TypeBoolean)
		return (TypeBoolean);
	    /*else if(Mode == LitNode)
	      return (Decoration(Child(Declaration, 1)));
	      /*return (TypeInteger);*/
	    else
	      return (Decoration(Declaration));
         }
         else{
	   ErrorHeader(T);
	   printf ("INTERNAL ERROR NULL DECLARATION FOUND ");
	   printf ("\n");
	 };
	 return (TypeInteger);

   case RangeNode:
     Type1 = Expression(Child(T,1));
     Type2 = Expression(Child(T,2));
     if(Type1 != Type2){/* || (Type1 != TypeInteger && Type1 != TypeCharacter)){*/
       ErrorHeader(T);
       printf ("RANGE OPERATOR MUST BE OF SAME TYPE");
       printf ("\n");
     }
     return (Type1);

      case SuccNode:
	Type1 = Expression(Child(T, 1));
	Decorate(T, Type1);
	/*printf("The type of expression in succ is :%d\n", Type1);*/
	if(Type1 != TypeInteger && Type1 != TypeCharacter && !(NodeName(Type1) == TypeNode && NKids(Type1)>1 && NodeName(Child(Type1,2)) == LitNode)){
	  ErrorHeader(T);
	  printf ("SUCC OPERATES ON INTEGERS/CHARACTER/ENUMERATED EXPRESSIONS.");
	  printf ("\n");
	};
	return (Type1);

   case PredNode:
	Type1 = Expression(Child(T, 1));
	Decorate(T, Type1);
	if(Type1 != TypeInteger && Type1 != TypeCharacter && !(NodeName(Type1) == TypeNode && NKids(Type1)>1 && NodeName(Child(Type1,2)) == LitNode)){
	  ErrorHeader(T);
	  printf ("PRED OPERATES ON INTEGER/CHARACTER/ENUMERATED EXPRESSIONS.%d", Type1);
	  printf ("\n");
	};
	return (Type1);

   case ChrNode:
     Type1 = Expression(Child(T,1));
     Decorate(T, TypeCharacter);
     if(Type1 != TypeInteger){
       ErrorHeader(T);
       printf ("ARGUEMENTS OF CHR MUST BE OF TYPE INTEGER.");
	  printf ("\n");
     };
     return (TypeCharacter);

   case OrdNode:
     Type1 = Expression(Child(T,1));
     /*Mode = GetMode(Child(T, 1));*/
     Decorate(T, TypeInteger);
     if(Type1 != TypeInteger && Type1 != TypeCharacter && !(NodeName(Type1) == TypeNode && NKids(Type1)>1 && NodeName(Child(Type1,2)) == LitNode)){
       ErrorHeader(T);
       printf ("ARGUEMENTS OF ORD FUNCTION SHOULD BE OF TYPE LITERAL.");
       printf ("\n");
     };
     return (TypeInteger);
     
      case CallNode:
	Mode = GetMode(Child(T,1));
	if(Mode == ProcedureNode){
	  ErrorHeader(Child(T,1));
	  printf("PROCEDURE CALLED AS A FUNCTION.\n");
	  printf("\n");
	};
	return HandleCallNode(T);
	/*Type1 = Expression(Child(T,1));
	Mode = GetMode(Child(T,1));
	if(Mode == FunctionNode){
	  Temp1 = Decoration(Child(Decoration(Child(T,1)),1)); 
	  Temp1 = Child(Temp1,2);
	  if( NKids(Temp1) == NKids(T) -1 ){
	    NodeCount = 0;
	    for( Kid = 1; Kid <= NKids(Temp1) ; Kid++){
	      for( i = 1; i <= NKids(Child(Temp1,Kid)) -1; i++){
		NodeCount++;
		if( Decoration(Child(Child(Temp1,Kid), i)) != Expression(Child(T, NodeCount+1)) ){
		  ErrorHeader(Child(T, NodeCount +1));
		  printf ("PARAMETERS OF FUNCTION CALL DOESN'T MATCH THE DEFINITION. ");
		  printf ("\n");
		};
	      }
	    };
	  }
	  else{
	    ErrorHeader(Child(T,1));
	    printf ("Number of parameters for the function call doesnt match its definition. ");
	    printf ("\n");
	  }
	}
	else{
	  ErrorHeader(Child(T,1));
	  printf ("VARIABLE NAME SHOULD BE A FUNCTION.");
	  printf ("\n");
	};	  
	return (Type1);*/

      default :
         ErrorHeader(T);
         printf ( "UNKNOWN NODE NAME ");
         Write_String (stdout,NodeName(T));
         printf ("\n");

   }  /* end switch */
}  /* end Expression */


int CountParams(TreeNode ParamNode){
  int Kid, ChildCount;
  for( Kid=1,ChildCount = 0; Kid <= NKids(ParamNode); Kid++)
    ChildCount = ChildCount + NKids(Child(ParamNode,Kid)) - 1;
  return ChildCount;      
};

UserType HandleCallNode(TreeNode T){
  int i, Kid, NodeCount;
  UserType Type1;
  TreeNode  Temp1, Mode;

	Type1 = Expression(Child(T,1));
	Mode = GetMode(Child(T,1));
	if(Mode == FunctionNode){
	  Temp1 = Decoration(Child(Decoration(Child(T,1)),1)); /* FunctionNode defintion node*/
	  Temp1 = Child(Temp1,2); /*paramsNode in the function definition */
	  if( CountParams(Temp1) == NKids(T) -1 ){
	    NodeCount = 0;
	    for( Kid = 1; Kid <= NKids(Temp1) ; Kid++){
	      for( i = 1; i <= NKids(Child(Temp1,Kid)) -1; i++){
		NodeCount++;
		if( Decoration(Child(Child(Temp1,Kid), i)) != Expression(Child(T, NodeCount+1)) ){
		  ErrorHeader(Child(T, NodeCount +1));
		  printf ("PARAMETERS OF FUNCTION CALL DOESN'T MATCH THE DEFINITION. ");
		  printf ("\n");
		};
	      }
	    };
	  }
	  else{
	    ErrorHeader(Child(T,1));
	    printf ("Number of parameters for the function call doesnt match its definition. ");
	    printf ("\n");
	  }
	}
	else if(Mode == ProcedureNode){
	  Temp1 = Decoration(Child(Decoration(Child(T,1)),1)); /* Proc defintion node*/
	  Temp1 = Child(Temp1,2); /*paramsNode in the Proc definition */
	  if( CountParams(Temp1) == NKids(T) -1 ){
	    NodeCount = 0;
	    for( Kid = 1; Kid <= NKids(Temp1) ; Kid++){
	      for( i = 1; i <= NKids(Child(Temp1,Kid)) -1; i++){
		NodeCount++;
		if( Decoration(Child(Child(Temp1,Kid), i)) != Expression(Child(T, NodeCount+1)) ){
		  ErrorHeader(Child(T, NodeCount +1));
		  printf ("PARAMETERS OF PROCEDURE CALL DOESN'T MATCH THE DEFINITION. ");
		  printf ("\n");
		};
	      }
	    };
	  }
	  else{
	    ErrorHeader(Child(T,1));
	    printf ("Number of parameters for the PROCEDURE call doesnt match its definition. ");
	    printf ("\n");
	  }
	}
	else{
	  ErrorHeader(Child(T,1));
	  printf ("CALL VARIABLE NAME SHOULD BE EITHER OF TYPE FUNCTION/PROCEDURE.");
	  printf ("\n");
	};
	return (Type1);
}

void ProcessNode (TreeNode T) 
{
   int Kid, N;
   String Name1, Name2;
   TreeNode Type1, Type2, Type3, Temp, Dcln1, Mode, Declaration;

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
	 DTEnter("<subprog_ctxt>", T, T);
         OpenScope();
	 AnnounceContext(T);
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
	 
      case SubProgsNode :
	for (Kid = 1; Kid <= NKids(T); Kid++)
            ProcessNode (Child(T,Kid));
	break;

      case FunctionNode :
	if(NodeName(Child(Child(T,1),1)) != NodeName(Child(Child(T,NKids(T)),1))){
	  ErrorHeader(T);
	  printf ("FUNCTION NAMES DO NOT MATCH\n");
	  printf ("\n");
	}
	
	  DTEnter(NodeName(Child(Child(T,1),1)) , Child(T,1));
	  OpenScope();
	  DTEnter("<subprog_ctxt>", T, T);
	  Dcln1 = Lookup(NodeName(Child(Child(T,3),1)), Child(T,3)); /* 3rd child is the return type */
	  Decorate(Child(T,1), Decoration(Dcln1));/*function's return type */
	  Decorate(Child(Child(T,1),1), T);
	  ProcessNode(Child(T,2));
	  for (Kid = 4; Kid <= NKids(T)-1; Kid++){
            ProcessNode (Child(T,Kid));
	  };
	  CloseScope();
	break;
     
      case ProcedureNode :
	if(NodeName(Child(Child(T,1),1)) != NodeName(Child(Child(T,NKids(T)),1))){
	  ErrorHeader(T);
	  printf ("PROCEDURE NAMES DO NOT MATCH\n");
	  printf ("\n");
	};
	
	DTEnter(NodeName(Child(Child(T,1),1)) , Child(T,1));
	OpenScope();
	DTEnter("<subprog_ctxt>", T, T);
	Decorate(Child(Child(T,1),1), T);
	ProcessNode(Child(T,2));
	for (Kid = 3; Kid <= NKids(T)-1; Kid++){
	  ProcessNode (Child(T,Kid));
	};	
	CloseScope();
	break;
	
      case ParamsNode:
	for (Kid = 1; Kid <= NKids(T); Kid++){
            ProcessNode (Child(T,Kid));
	  };
	break;
     
      case ReturnNode:	
	Temp = Lookup("<subprog_ctxt>", T);
	if(NodeName(Temp) != FunctionNode){
	  ErrorHeader(T);
	  printf ("RETURN STATEMENT ONLY ALLOWED IN FUNCTIONS.\n");
	  printf ("\n");
	};
	if(NKids(T) > 0){
	  Type1 = Expression(Child(T,1));
	  if(Decoration(Child(Temp,1)) != Type1 && NodeName(Temp) != ProcedureNode){
	    ErrorHeader(T);
	    printf ("RETURN TYPE DOESNT MATCH THE FUNCTION DEFINITIONS RETURN TYPE.\n");
	    printf ("\n");
	  }
	}
	else{
	  /*WarningHeader(T);
	  printf("RETURN FROM THE FUNCTION MIGHT RETURN A PROPER VALUE.");
	  printf("\n");*/
	};
	break;
     
      case TypeNode :
	DTEnter (NodeName(Child(Child(T,1), 1)),Child(T, 1),T);
	Decorate(Child(T, 1), T);
	Decorate(Child(Child(T,1), 1), T);
	if(NKids(T) > 1){
	  if(NodeName(Child(T, 2)) == LitNode){
	    for(Kid = 1; Kid <= NKids(Child(T, 2)); Kid++){
	      DTEnter (NodeName(Child(Child(Child(T,2), Kid),1)), Child(Child(T, 2), Kid),T);
	      Decorate(Child(Child(Child(T,2),Kid), 1), Child(T, 2));
	      Decorate(Child(Child(T,2), Kid), T);
	    };
	  }
	  else if(NodeName(Child(T,2)) == IdentifierNode){
	      Dcln1 = Lookup(NodeName(Child(Child(T, 2), 1)), T);
	      Decorate(Child(T, 2), Dcln1);
	      Decorate(Child(T, 1),Decoration(Dcln1));
	  }
	  else{
	    ErrorHeader(T);
	    printf ("Compiler Error : The second child of TypeNode should be LitNode or Identifier Node.\n");
	    printf("found %d", NodeName(Child(T,2)));
	    printf ("\n");
	  };
	};
         break;

      case TypesNode :
      case  ConstsNode:
      case DclnsNode :
         for (Kid = 1; Kid <= NKids(T); Kid++)
            ProcessNode (Child(T,Kid));
         break;


      case VarNode :

	Name1 = NodeName(Child((Child(T, NKids(T))),1));

         Type1 =  Lookup (Name1,T);
	 Decorate(Child(T, NKids(T)) , Type1);
         for (Kid  = 1; Kid < NKids(T); Kid++)
         {
            DTEnter (NodeName(Child(Child(T,Kid),1)), Child(T,Kid), T);
            Decorate (Child(T,Kid), Decoration(Type1));
	    Decorate( Child(Child(T,Kid),1), T);
         };
	 /*Decorate(Child(T, NKids(T)) , Child(Type1, 1));*/
         break;

   case ConstNode:
     switch(NodeName(Child(T,2))){
     case IntegerNode:
       Name1 = IntegerTNode;
       Type1 =  Lookup (Name1,T);
       break;
     case CharacterNode:
       Name1 = CharacterTNode;
       Type1 =  Lookup (Name1,T);
       break;
     case IdentifierNode:
       Mode = GetMode(Child(T, 2));
       if(Mode != LitNode && Mode != ConstNode){
	 ErrorHeader(T);
	 printf ("CONSTANTS CANNOT BE ASSIGNED A TYPE\n");
	 printf ("\n");
       };
       Type1 = Lookup(NodeName(Child(Child(T, 2), 1)), T);
       Decorate(Child(T, 2), Type1);
       break;
     default:
       printf("Const Node Type Could not be inferred.");
       /*     case BooleanNode;
       Name1 = BooleanTNode;
       break;*/
     }
     DTEnter(NodeName(Child(Child(T,1),1)), Child(T,1), T);
     Decorate(Child(T, 1), Decoration(Type1));
     Decorate(Child(Child(T,1),1), T);
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

	 CheckModeForAssignmentIdentifier(Child(T, 1));
         if (Type1 != Type2)
         {
            ErrorHeader(T);
            printf ("ASSIGNMENT TYPES DO NOT MATCH\n");
            printf ("\n");
         }
         break;


      case OutputNode :
	for (Kid = 1; Kid <= NKids(T); Kid++){
	  if(NodeName(Child(T, Kid)) != StringNode)
	    Type1 = Expression(Child(T, Kid));  
	  if(NodeName(Child(T,Kid)) == IdentifierNode){
	    Mode = GetMode(Child(T,Kid));
	    if(Mode == LitNode){
	      ErrorHeader(T);
	      printf ("CANNOT OUTPUT ENUMERATED TYPES\n");
	      printf ("\n");
	      continue;
	    };
	  };
	  if (Type1 != TypeInteger && Type1 != TypeCharacter && NodeName(Child(T,Kid)) != StringNode)
	    {
	      ErrorHeader(T);
	      printf ("OUTPUT EXPRESSION MUST BE TYPE INTEGER OR CHARACTER OR STRINGS\n");
	      printf ("\n");
            }
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
         Type1 = Expression (Child(T,1));
         Type2 = Expression (Child(T,2));
         if (Type1 != Type2 || NodeName(Child(T,1)) != IdentifierNode || NodeName(Child(T,2)) != IdentifierNode)
	   {
            ErrorHeader(T);
            printf ("SWAP TYPES ARE ILLEGAL OR DO NOT MATCH\n");
            printf ("\n");
         }
	 else
	   {
	     CheckModeForAssignmentIdentifier(Child(T,1));
	     CheckModeForAssignmentIdentifier(Child(T,2));

	     Temp = Lookup("<for_ctxt>", T);
	     while(NodeName(Temp) != ProgramNode){
		 if(NodeName(Child(Child(Temp, 1), 1)) == NodeName(Child(Child(T, 1), 1)))
		   {
		     ErrorHeader(T);
		     printf ("CANNOT SWAP WITH LOOP CONTROL VARIABLE\n");
		     printf ("\n");
		   }
		 Temp = Decoration(Temp);
	       };
	     Temp = Lookup("<for_ctxt>", T);
	     while(NodeName(Temp) != ProgramNode){
		 if(NodeName(Child(Child(Temp, 1), 1)) == NodeName(Child(Child(T, 2), 1)))
		   {
		     ErrorHeader(T);
		     printf ("CANNOT SWAP WITH LOOP CONTROL VARIABLE\n");
		     printf ("\n");
		   }
		 Temp = Decoration(Temp);
	       };
	   }
         break;

   case UptoNode:
        Temp = Lookup("<for_ctxt>", T);
	Decorate(T, Temp);
	OpenScope();
	AnnounceContext(T);
	Type1 = Expression(Child(T, 1));
	Type2 = Expression(Child(T, 2));
	Type3 = Expression(Child(T, 3));
	if(Type1 != Type2 || Type2 != Type3)
	  {
	    ErrorHeader(T);
            printf ("FOR LOOP VARIABLE DOESN'T MATCH THE TYPE OF START VALUE");/*, Type1 : %d , Type2: %d, Type3: %d", Type1, Type2, Type3);*/
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

   case DownToNode:
     Temp = Lookup("<downto_ctxt>", T);
     Decorate(T, Temp);
     OpenScope();
     AnnounceContext(T);
     Type1 = Expression(Child(T, 1));
     Type2 = Expression(Child(T, 2));
     Type3 = Expression(Child(T, 3));
     if(Type1 != Type2 || Type2 != Type3)
	  {
	    ErrorHeader(T);
            printf ("DOWNTO LOOP VARIABLE DOESN'T MATCH THE TYPE OF START VALUE\n");
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
	 if(NodeName(Child(Child(T,Kid), 1)) == IdentifierNode){
	   if(NodeName(Decoration(Child(Decoration(Child(Child(T,Kid), 1)),1))) == VarNode){
	     ErrorHeader(Child(Child(T,Kid), 1));
	     printf("CASE CLAUSE CAN ONLY HAVE LIT OR CONST AS LABEL\n");/*,Type1 %d, Type2 %d", Type1, Type2);*/
	     printf("\n");
	   };
	 };
	 if(Type2 != Type1){
	   ErrorHeader(Child(Child(T,Kid), 1));
	   printf("CASE CLAUSE NOT OF TYPE OF THE CASE EXPRESSION\n");/*,Type1 %d, Type2 %d", Type1, Type2);*/
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

      case ReadNode :	
	for(Kid = 1; Kid <= NKids(T); Kid++){
	  Type1 = Expression(Child(T, Kid));
	  
	  Temp = Lookup("<for_ctxt>", T);
	  while(NodeName(Temp) != ProgramNode)
	    {
	      if(NodeName(Child(Child(Temp, 1), 1)) == NodeName(Child(Child(T, 1), 1)))
		{
		  ErrorHeader(T);
		  printf ("CANNOT READ IN A FOR-LOOP VARIABLE\n");
		  printf ("\n");
		}
	      Temp = Decoration(Temp);
	    };
	  
	  /*printf("The type of expression is : %d\n", Type1);*/
	  if(Type1 != TypeInteger && Type1 != TypeCharacter)
	    {
	    ErrorHeader(Child(T,Kid));
	    printf("READ STATEMENT ALLOWS ONLY INTEGERS AND CHARACTERS TO BE READ");
	    printf("\n");
	  };
	};
	  break;


   case CallNode:
     Mode = GetMode(Child(T,1));
     if(Mode == FunctionNode){
       ErrorHeader(Child(T,1));
       printf("FUNCTIONS CALLED AS PROCEDURE.\n");
       printf("\n");
     };
     HandleCallNode(T);
     break;

      case NullNode :  
         break;

      default :
         ErrorHeader(T);
         printf ("UNKNOWN NODE NAME ");
         Write_String (stdout,NodeName(T));
         printf ("\n");

   }  /* end switch */
};  /* end ProcessNode */


void AnnounceContext(TreeNode T)
{
  DTEnter("<for_ctxt>", T);
  DTEnter("<downto_ctxt>", T);
  DTEnter("<loop_ctxt>", T);
};

TreeNode GetMode(T){
  TreeNode Declaration, Mode;
  Declaration = Lookup(NodeName(Child(T, 1)),T);
  Mode = NodeName(Decoration(Child(Declaration,1)));  
  return Mode;
};

void CheckModeForAssignmentIdentifier(TreeNode T){
  TreeNode Declaration, Mode, TempNode;

  TempNode =  Lookup("<subprog_ctxt>", T);

  Mode = GetMode(T);
  if(Mode != VarNode && Child(TempNode,1) != Decoration(T) ){
    ErrorHeader(T);
    printf ("CANNOT ASSIGN/SWAP TYPES, CONSTANTS, LITERALS, FUNCTIONS(UNLESS THE ASSIGNMENT IS IN THE SAME FUNCTION), PROCEDURES.\n");
    /*printf("Mode is : %d\n", Mode);*/
    printf ("\n");
  };
};
