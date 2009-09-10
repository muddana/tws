/*************************************************************
                 TREE MODULE HEADER   -   Tree.h
**************************************************************/

/*

General purpose tree facility.  Tree is stored as a Stack,
in pre-order.

*/
#include <stdio.h>
#define NullTree 0

typedef int TreeNode;

extern Stack Tree,TreeOrchard;
extern FILE *Tree_File;
extern char *TreeFileName; 

extern void InitializeTreeModule(void);

extern String NodeName(TreeNode Node);

extern void ChangeNodeName(TreeNode Node, String NewName);

extern String SourceLocation(TreeNode Node);

extern int Rank(TreeNode Node);

extern void ReduceRank(TreeNode Node, int NewRank);

extern TreeNode Child(TreeNode Node, int Kid);

extern void ReduceChildren(TreeNode Node, int NewRank);

extern TreeNode BuildNode(String NodeName, String SourceLocation, int NodeRank);

extern int ReadTrees(void);

extern int Read_Trees(void);

extern WriteTrees();

extern TreeNode RootOfTree(int n);

extern void PrintTree(FILE *OutFile, TreeNode Node);

extern void PrintSubTree(FILE *OutFile, TreeNode Node, int Indent);

extern void PrintForest(FILE *OutFile);

extern void Decorate(TreeNode T1, TreeNode T2);

extern TreeNode Decoration(TreeNode T);

extern void AddTree(String NodeName, TreeNode T, int Nkid);

extern void ReportTreeErrorAt(TreeNode Node);
