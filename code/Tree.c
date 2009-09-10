#include <stdio.h>
#include <header/Table.h>
#include <header/Text.h>
#include <header/Error.h>
#include <header/CommandLine.h>
#include <header/String_Input.h>
#include <header/Tree.h>
#include <header/Open_File.h>

FILE *Tree_File;
Stack Tree, TreeOrchard;

void InitializeTreeModule(void) 
{
   Tree = AllocateStack(3000);
   TreeOrchard = AllocateStack(500);
}


String NodeName(TreeNode Node) 
{
   return Element(Tree, Node);
}


void ChangeNodeName(TreeNode Node, String NewName) 
{
   Assign(Tree, Node, NewName);
}
 

String SourceLocation(TreeNode Node) 
{
   return Element(Tree, Node+1);
}


int Rank(TreeNode Node) 
{
   return abs(Element(Tree, Node+2)) % 1000;
}


void ReduceRank(TreeNode Node, int NewRank)
{
   int i;

   if (NewRank < 0)
   {
      fprintf(stderr, "***[Tree:ReduceRank] can not reduce rank to a negative number ***\n");
      FatalError;
   }

   else if (abs(Element(Tree,Node+2)) % 1000 < NewRank)
   {
      fprintf(stderr, "***[Tree:ReduceRank] can not increase to larger rank ***\n");
      FatalError;
   }

   else 
   {
      for(i=1; i <= NewRank; i++) 
         Push (TreeOrchard, Child(Node, i));
    
      ReduceChildren(Node, NewRank);
   }
        

}


TreeNode Child(TreeNode Node, int Kid)
{
   int NumberKids;
   int NodeRank;

   NumberKids = Rank(Node);

   if(Kid < 1 || Kid > NumberKids)
   {
      fprintf(stderr,"***[Tree:Child] Attempted to get Child (%1d , %1d). ",Node,Kid);
      fprintf(stderr,"Child Nonexistent. Node is ");
      Write_String(stderr, NodeName(Node));
      FatalError;
   }

   else 
      return Element (Tree, NumberKids + Node + 3 - Kid);
}


void ReduceChildren(TreeNode Node, int NewRank)
{
   int NumberKids;
   int NodeRank;
   int i;

   NumberKids = abs(Element(Tree,Node+2))%1000;
 
   if ( NewRank < 0 || NewRank > NumberKids )
   {
      fprintf(stderr,"***[Tree:ReduceChildren] Can Not Reduce Childen of node %1d to rank %1d *** \n", Node, NewRank);
      FatalError;
   }

   else 
   {
      Assign(Tree, Node+2, NewRank);
    
      for (i = Node+3; i <= Node+NewRank+2 ; i++) 
         Assign(Tree, i, Pop(TreeOrchard));
   }
}


TreeNode Build_Node(String NodeName, String SourceLocation, int NodeRank)
{
   int Node;
   TreeNode Root;

   Push(Tree, NodeName);
   Root = SizeOf ( Tree );
   Push(Tree, SourceLocation);
   Push(Tree, NodeRank);
    
   for (Node = 0; Node < (NodeRank % 1000); Node++)
	Push(Tree, Pop(TreeOrchard));
    
   Push(TreeOrchard, Root);
   return Root;
}


void Decorate(TreeNode T1, TreeNode T2)
{
   int Neg;
   int NewValue;

   Neg = (T2 < 0);
   NewValue = abs(Element(Tree, T1+2)) % 1000 + abs(T2) * 1000;

   if (Neg) 
      Assign(Tree, T1 + 2, -NewValue);
   else 
      Assign(Tree, T1 + 2, NewValue);
}


TreeNode Decoration(TreeNode T)
{
   int Neg;
   int Value;

   Value = Element(Tree,T+2);
   Neg = Value < 0;

   if (Neg) 
      return -(abs(Value) / 1000);
   else 
      return Value / 1000;
}


void AddTree(String NodeName, TreeNode T, int Nkid)
{
   Stack TempTree;
   TreeNode TempNode,KidNode,NewKid;
   int i, CurrKid;

   TempTree = AllocateStack(500);

   if(Nkid==1)
   {
      KidNode = T;
    
      while (Rank(KidNode) != 0)
         KidNode = Child(KidNode, 1);
   }

   else 
   {
      KidNode = Child(T, Nkid-1);
      KidNode = KidNode + Rank(KidNode) + 3;
   }

   for (i=1; i <= KidNode-1; i++)
      Push(TempTree, Element(Tree,i));                 /*copy previous nodes      */

   Push(TempTree, NodeName);
   NewKid = SizeOf(TempTree);
   Push(TempTree, UndefinedString);                    /* insert new node         */
   Push(TempTree, 0);
   TempNode = KidNode;
   
   while(TempNode < T)                                 /* Process nodes before T  */
   {
      Push(TempTree, Element(Tree, TempNode));         /*    copy Name,           */
      Push(TempTree, Element(Tree, TempNode+1));       /*          SourceLocation,*/
      Push(TempTree, Element(Tree, TempNode+2));       /*           Number of Kids*/

      for(i=1;i<=Element(Tree,TempNode+2);i++)
      {
         CurrKid = Element (Tree, TempNode + i + 2);

         if (CurrKid >= KidNode)                       /* copy pointers to kids   */
	    Push (TempTree, CurrKid+3);          
         else 
	    Push (TempTree, CurrKid);
      }

      TempNode = TempNode + Element (Tree, TempNode + 2) + 3;
   }
                                                       /* Process Node T          */
   Push(TempTree, Element(Tree, TempNode));    
   Push(TempTree, Element(Tree, TempNode+1));  
   Push(TempTree, Element(Tree, TempNode+2)+1);
  
   for(i=1;i<=Element(Tree, TempNode+2) - Nkid + 1;i++)
   {
      CurrKid = Element(Tree, TempNode + i + 2);

      if (CurrKid >= KidNode)                          /* copy pointers to kids   */
         Push(TempTree, CurrKid+3);                    /* before the new one.     */
      else 
         Push(TempTree, CurrKid);
   }

   Push (TempTree, NewKid);                             /* insert new kid          */

   for(i=1; i <= Nkid-1; i++)                           /* copy the remaining kids */
   { 
      CurrKid = Element (Tree, TempNode + Element(Tree,TempNode+2)-Nkid+3+i);

      if (CurrKid >= KidNode)                      
         Push(TempTree, CurrKid+3);         
      else 
         Push(TempTree, CurrKid);
   }

   TempNode = TempNode + Element (Tree, TempNode + 2) + 3;

   while(TempNode <= SizeOf(Tree))                     /* Process nodes after T   */
   {
      Push(TempTree, Element(Tree, TempNode));         /*    copy Name,           */
      Push(TempTree, Element(Tree, TempNode+1));       /*          SourceLocation,*/
      Push(TempTree, Element(Tree, TempNode+2));       /*           Number of Kids*/

      for(i=1;i<=Element(Tree, TempNode+2);i++)
      {
         CurrKid = Element (Tree, TempNode + i + 2);

         if(CurrKid >= KidNode)                        /* copy pointers to kids   */
	 {
            if (CurrKid > T) 
	       Push(TempTree, CurrKid+4);         
	    else 
	       Push(TempTree, CurrKid+3);
	 }

         else 
	    Push(TempTree, CurrKid);
      }

      TempNode = TempNode + Element (Tree, TempNode + 2) + 3;
   }

   if (RootOfTree(1) > T)
      Assign (TreeOrchard, 1, RootOfTree(1)+4);
   else 
      Assign (TreeOrchard, 1, RootOfTree(1)+3);

   Empty(Tree);

   for (i=1; i <= SizeOf(TempTree); i++)
      Push(Tree, Element(TempTree,i));
}


int ReadTrees(void)
{
   String NodeName, SourceLocation;
   int NodeRank;                                      /* Number of kids the node has */
   TreeNode Dummy;
   int SizeOfTreeStack;

   SizeOfTreeStack = SizeOf(TreeOrchard);

   NodeName = Convert_InputLineTo_String(Tree_File);
    
   while (!feof(Tree_File)) 
   {
      SourceLocation = Convert_InputLineTo_String(Tree_File);
      fscanf(Tree_File,"%d",&NodeRank);
	
      while (fgetc(Tree_File) != '\n')
         ;

      Dummy = Build_Node(NodeName, SourceLocation, NodeRank);

      NodeName = Convert_InputLineTo_String(Tree_File);
   }

   return SizeOf(TreeOrchard) - SizeOfTreeStack;
}


int Read_Trees(void)
{
   String NodeName, SourceLocation;
   int NodeRank;                                      /* Number of kids the node has */
   TreeNode Dummy;
   int SizeOfTreeStack;

   SizeOfTreeStack = SizeOf(TreeOrchard);

   NodeName = Convert_InputLineTo_String(Tree_File);
    
   while (!feof(Tree_File)) 
   {
      SourceLocation = Convert_InputLineTo_String(Tree_File);
      fscanf(Tree_File,"%d",&NodeRank);
      while (fgetc(Tree_File) != '\n')
         ;
	
      Dummy = Build_Node(NodeName, SourceLocation, NodeRank);

      NodeName = Convert_InputLineTo_String(Tree_File);
   }

   return SizeOf(TreeOrchard) - SizeOfTreeStack;
}


void Write_Node(TreeNode Node)
{
   int i;

   for (i=1; i <= Rank(Node); i++)
      Write_Node(Child(Node, i));

   Write_String(Tree_File, NodeName(Node));
   fprintf(Tree_File,"\n");
   Write_String(Tree_File, SourceLocation(Node));
   fprintf(Tree_File,"\n");
   fprintf(Tree_File,"%1d\n", Element(Tree,Node+2));
}


void Write_Trees(void)
{
   int SizeOfTreeStack;
   int i;

   SizeOfTreeStack = SizeOf(TreeOrchard);
   
   for (i=1; i<= SizeOfTreeStack; i++)
      Write_Node(Element(TreeOrchard, i));
}

 
TreeNode RootOfTree(int n)
{
   return Element(TreeOrchard, n);
}


void PrintTree(FILE *OutFile, TreeNode Node)
{
  PrintSubTree(OutFile, Node, 0);
}


void PrintSubTree(FILE *OutFile, TreeNode Node, int Indent)
{
   int i,itsrank,itslocation;

   itsrank = Rank(Node);
   fprintf(OutFile, "[%5d]   ", Node);

   for (i=1; i <= Indent; i++)
      fprintf(OutFile,". ");

   Write_String(OutFile, NodeName(Node));
   fprintf(OutFile ,"(%1d)", itsrank);
   itslocation = SourceLocation(Node);

   if(itslocation!=UndefinedString)
   {
      fprintf (OutFile, " @ ");
      Write_String(OutFile, itslocation);
   }

   if (Decoration(Node) != 0)
      fprintf(OutFile, " Decoration: %1d", Decoration(Node));

   fprintf(OutFile,"\n");
 
   for (i=1; i <= itsrank; i++)
      PrintSubTree (OutFile, Child(Node, i), Indent+1);
}


void PrintForest(FILE *OutFile)
{
   int i;

   fprintf(OutFile , "---------------------------\n" );

   for(i=1; i <= SizeOf(TreeOrchard); i++)
   {
      PrintTree(OutFile, Element (TreeOrchard, i));
      if (i <= SizeOf(TreeOrchard))
        fprintf(OutFile,"---------------------------\n" );
   }
   
}


void ReportTreeErrorAt(TreeNode Node)
{
   String Location;

   fprintf(stdout, " at node ");
   Write_String(stdout, NodeName(Node));
   fprintf(stdout, "[%1d]", Node);
   Location = SourceLocation(Node);
 
   if(Location != UndefinedString)
   {
      fprintf(stdout, " @ ");
      Write_String(stdout, Location);
   }
  
   fprintf(stdout, " ***\n");
   IncrementErrorCount(1);
	
}
