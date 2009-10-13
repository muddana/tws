%{
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <DLists.h>
#include <Tokenizer.h>
#include <Trees.h>

extern TREENODE *root;
typedef struct {
    DNODE mynode;
    TREENODE *nodeptr;
} T_NODE;

%}
%union {
   TOKEN_INFO info;
   DLIST dlist;
}
%token <info>  END
%token <info>  FALSE
%token <info>  TO
%token <info>  EQSWAP
%token <info>  VAR
%token <info>  IDENTIFIER
%token <info>  POW
%token <info>  POOL
%token <info>  IF
%token <info>  READ
%token <info>  REPEAT
%token <info>  RANGE
%token <info>  ELSE
%token <info>  UNTIL
%token <info>  FOR
%token <info>  THEN
%token <info>  OF
%token <info>  NE
%token <info>  MOD
%token <info>  GT
%token <info>  CASE
%token <info>  EQ
%token <info>  WHILE
%token <info>  OUTPUT
%token <info>  EXIT
%token <info>  Eof
%token <info>  GTE
%token <info>  NOT
%token <info>  DO
%token <info>  BEGINX
%token <info>  BOOLEAN
%token <info>  TRUE
%token <info>  AND
%token <info>  INTEGER_NUM
%token <info>  INTEGER
%token <info>  LTE
%token <info>  LOOP
%token <info>  OR
%token <info>  LT
%token <info>  OTHERWISE
%token <info>  ASSIGNMENT
%token <info>  PROGRAM
%type <dlist> Statement_1_1
%type <dlist> Statement_1_1_1_1_1
%type <dlist> CaseClause
%type <dlist> ModAndMulDiv
%type <dlist> Unary
%type <dlist> Statement_1_1_1
%type <dlist> Tiny
%type <dlist> Statement_1
%type <dlist> Body_1
%type <dlist> Dcln
%type <dlist> Misc
%type <dlist> Statement
%type <dlist> Term
%type <dlist> Dcln_1
%type <dlist> Name
%type <dlist> Clause
%type <dlist> Body
%type <dlist> Dclns_1
%type <dlist> Statement_1_1_1_1_1_1
%type <dlist> Statement_1_1_1_1
%type <dlist> Type
%type <dlist> Expression
%type <dlist> Dclns
%type <dlist> Primary
%type <dlist> Statement_1_1_1_1_1_1_1
%%

Tiny     : PROGRAM  Name     ':'      Dclns    Body     Name     '.'      
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		while (DCount(&$4) > 0)
		    DAddTail(&r,DRemHead(&$4));

		while (DCount(&$5) > 0)
		    DAddTail(&r,DRemHead(&$5));

		while (DCount(&$6) > 0)
		    DAddTail(&r,DRemHead(&$6));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"program",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		t->mynode = *(DHead(&r));
		root = t->nodeptr;

             }
         ;

Dclns    : VAR      Dclns_1  
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"dclns",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"dclns",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

Dclns_1  : 
             {
		DLIST r;

		InitDList(&r);

		$$ = r;

             }
         | Dcln     ';'      Dclns_1  
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		$$ = r;

             }
         ;

Dcln     : Dcln_1   
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"dcln",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

Dcln_1   : Name     ':'      Type     
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		$$ = r;

             }
         | Name     ','      Dcln_1   
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		$$ = r;

             }
         ;

Type     : INTEGER  
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"integer",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | BOOLEAN  
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"boolean",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

Body     : BEGINX   Body_1   
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"block",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

Body_1   : Statement END      
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		$$ = r;

             }
         | Statement ';'      Body_1   
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		$$ = r;

             }
         ;

Statement : Name     ASSIGNMENT Expression 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"assign",
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | OUTPUT   '('      Statement_1 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"output",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | IF       Expression THEN     Statement Statement_1_1 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		if ($3.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$3.string,
		                                TREETAG_LINE,$3.line,
		                                TREETAG_COLUMN,$3.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$4) > 0)
		    DAddTail(&r,DRemHead(&$4));

		while (DCount(&$5) > 0)
		    DAddTail(&r,DRemHead(&$5));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"if",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | WHILE    Expression DO       Statement 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		if ($3.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$3.string,
		                                TREETAG_LINE,$3.line,
		                                TREETAG_COLUMN,$3.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$4) > 0)
		    DAddTail(&r,DRemHead(&$4));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"while",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | REPEAT   Statement_1_1_1 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"repeat",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | LOOP     Statement_1_1_1_1 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"loop",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | EXIT     
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"exit",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | Name     EQSWAP   Name     
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<swap>",
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | FOR      Name     ASSIGNMENT Expression TO       Expression DO       Statement 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		if ($3.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$3.string,
		                                TREETAG_LINE,$3.line,
		                                TREETAG_COLUMN,$3.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$4) > 0)
		    DAddTail(&r,DRemHead(&$4));

		if ($5.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$5.string,
		                                TREETAG_LINE,$5.line,
		                                TREETAG_COLUMN,$5.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$6) > 0)
		    DAddTail(&r,DRemHead(&$6));

		if ($7.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$7.string,
		                                TREETAG_LINE,$7.line,
		                                TREETAG_COLUMN,$7.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$8) > 0)
		    DAddTail(&r,DRemHead(&$8));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<upto>",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | CASE     Expression OF       Statement_1_1_1_1_1 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		if ($3.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$3.string,
		                                TREETAG_LINE,$3.line,
		                                TREETAG_COLUMN,$3.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$4) > 0)
		    DAddTail(&r,DRemHead(&$4));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"case",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | Body     
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         | 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<null>",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

Statement_1_1_1_1_1 : Statement_1_1_1_1_1_1 
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         | CaseClause Statement_1_1_1_1_1 
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		$$ = r;

             }
         ;

Statement_1_1_1_1_1_1 : END      
             {
		DLIST r;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		$$ = r;

             }
         | OTHERWISE Statement Statement_1_1_1_1_1_1_1 
             {
		DLIST r;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		$$ = r;

             }
         ;

Statement_1_1_1_1_1_1_1 : END      
             {
		DLIST r;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		$$ = r;

             }
         | ';'      END      
             {
		DLIST r;

		InitDList(&r);

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		$$ = r;

             }
         ;

Statement_1_1_1_1 : Statement POOL     
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		$$ = r;

             }
         | Statement ';'      Statement_1_1_1_1 
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		$$ = r;

             }
         ;

Statement_1_1_1 : Statement UNTIL    Expression 
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		$$ = r;

             }
         | Statement ';'      Statement_1_1_1 
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		$$ = r;

             }
         ;

Statement_1_1 : 
             {
		DLIST r;

		InitDList(&r);

		$$ = r;

             }
         | ELSE     Statement 
             {
		DLIST r;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		$$ = r;

             }
         ;

Statement_1 : Expression ')'      
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         | Expression ','      Statement_1 
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		$$ = r;

             }
         ;

CaseClause : Clause   ':'      Statement ';'      
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<case_clause>",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

Clause   : INTEGER_NUM 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<integer>",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | Primary  RANGE    Primary  
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<range>",
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

Expression : Term     
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         | Term     GT       Term     
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,">",
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | Term     LT       Term     
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<",
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | Term     GTE      Term     
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,">=",
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | Term     NE       Term     
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<>",
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | Term     EQ       Term     
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"=",
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | Term     LTE      Term     
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<=",
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

Term     : ModAndMulDiv 
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         | ModAndMulDiv OR       Term     
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"or",
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | ModAndMulDiv '+'      Term     
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"+",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | ModAndMulDiv '-'      Term     
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"-",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

ModAndMulDiv : Unary    
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         | Unary    MOD      ModAndMulDiv 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"mod",
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | Unary    AND      ModAndMulDiv 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"and",
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | Unary    '*'      ModAndMulDiv 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"*",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | Unary    '/'      ModAndMulDiv 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"/",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

Unary    : Misc     
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         | NOT      Unary    
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"not",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | '+'      Unary    
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		$$ = r;

             }
         | '-'      Unary    
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"neg",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

Misc     : Primary  
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         | Primary  POW      Misc     
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		if ($2.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$2.string,
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&$3) > 0)
		    DAddTail(&r,DRemHead(&$3));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"pow",
		                                TREETAG_LINE,$2.line,
		                                TREETAG_COLUMN,$2.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

Primary  : READ     
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"read",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | Eof      
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"eof",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | Name     
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$1) > 0)
		    DAddTail(&r,DRemHead(&$1));

		$$ = r;

             }
         | TRUE     
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<true>",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | FALSE    
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<false>",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | INTEGER_NUM 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<integer>",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         | '('      Expression ')'      
             {
		DLIST r;

		InitDList(&r);

		while (DCount(&$2) > 0)
		    DAddTail(&r,DRemHead(&$2));

		$$ = r;

             }
         ;

Name     : IDENTIFIER 
             {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ($1.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,$1.string,
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<identifier>",
		                                TREETAG_LINE,$1.line,
		                                TREETAG_COLUMN,$1.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		$$ = r;

             }
         ;

