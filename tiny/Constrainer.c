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
#define LENode         14
#define PlusNode       15
#define MinusNode      16
#define ReadNode       17
#define IntegerNode    18
#define IdentifierNode 19

#define NumberOfNodes  19

typedef TreeNode UserType;

/****************************************************************
 Add new node names to the end of the array, keeping in strict
  order with the define statements above, then adjust the i loop
  control variable in InitializeConstrainer().
*****************************************************************/
char *node[] = { "program", "types", "type", "dclns",
                 "dcln", "integer", "boolean", "block",
                 "assign", "output", "if", "while", 
                 "<null>", "<=", "+", "-", "read",
                 "<integer>", "<identifier>" 
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



void ErrorHeader (TreeNode T)
{ 
   printf ("<<< CONSTRAINER ERROR >>> AT ");
   Write_String (stdout,SourceLocation(T));
   printf (" : ");
   printf ("\n");
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
      case LENode :    
         Type1 = Expression (Child(T,1));
         Type2 = Expression (Child(T,2));

         if (Type1 != Type2)
         {
            ErrorHeader(Child(T,1));
            printf ("ARGUMENTS OF '<=' MUST BE TYPE INTEGER\n");
            printf ("\n");
         }
         return (TypeBoolean);


      case PlusNode :
      case MinusNode : 
         Type1 = Expression (Child(T,1));

         if (Rank(T) == 2)
            Type2 = Expression (Child(T,2));
         else  
            Type2 = TypeInteger;

         if (Type1 != TypeInteger || Type2 != TypeInteger)
         {
            ErrorHeader(Child(T,1));
            printf ("ARGUMENTS OF '+', '-', '*', '/', mod ");
            printf ("MUST BE TYPE INTEGER\n");
            printf ("\n");
         }
         return (TypeInteger);

 
      case ReadNode :
         return (TypeInteger);


      case IntegerNode : 
         return (TypeInteger);


      case IdentifierNode :
         Declaration = Lookup (NodeName(Child(T,1)), T);
         if (Declaration != NullDeclaration)
         {
            Decorate (T, Declaration);
            return (Decoration(Declaration));
         }
         else
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
   TreeNode Type1, Type2, Type3;

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
         Name1 = NodeName(Child(Child(T,1),1));
         Name2 = NodeName(Child(Child(T,NKids(T)),1));

         if (Name1 != Name2)
         {
           ErrorHeader(T);
           printf ("PROGRAM NAMES DO NOT MATCH\n");
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


      case NullNode : 
         break;

      default :
         ErrorHeader(T);
         printf ("UNKNOWN NODE NAME ");
         Write_String (stdout,NodeName(T));
         printf ("\n");

   }  /* end switch */
}  /* end ProcessNode */
