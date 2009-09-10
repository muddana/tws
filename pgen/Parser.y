%{
#include <stdio.h>
#include <assert.h>
#include "Tokenizer.h"
#include "Trees.h"
#include "Nonterminals.h"


extern TREENODE *root;
#define YYDEBUG 1
%}
%union {
   TOKEN_INFO info;
   TREENODE *nodeptr;
}

%token <info> MARK NODE OR LIST ACTION IDENTIFIER LITERAL STRING
%token <info> LIT /* single chars like ';' */
%token <info> PIPE STAR PLUS QUESTION
%type  <nodeptr> spec defs def nlist yid rules rule or rbody 
%type  <nodeptr> rexp term fact prim rop

%%

spec: defs MARK rules
          {
	      TREENODE *t;
	      t = AllocTreeNode(TREETAG_TOKEN,t_spec,
				TREETAG_STRING,"spec",
				TREETAG_DONE);

	      AddChildren(t,$1,$3,NULL);
	      root = t;
          }
      ;

defs  : /* empty  */
          {
	      TREENODE *t;
	      t = AllocTreeNode(TREETAG_TOKEN,t_defs,
				TREETAG_STRING,"defs",
				TREETAG_DONE);

	      $$ = t;
          }
      | defs def
          {
	      AddChild($1,$2);
	      $$ = $1;
          }
      ;

def   : NODE nlist
          {
	      $$ = $2;
          }
      ;

nlist : yid
          {
	      TREENODE *t;
	      t = AllocTreeNode(TREETAG_TOKEN,t_def,
				TREETAG_STRING,"def",
				TREETAG_DONE);

	      AddChild(t,$1);
	      $$ = t;
          }
      | nlist yid
          {
	      AddChild($1,$2);
	      $$ = $1;
          }
      | nlist ',' yid
          {
	      AddChild($1,$3);
	      $$ = $1;
          }
      ;

yid   : IDENTIFIER
          {
	      TREENODE *t;
	      t = AllocTreeNode(TREETAG_TOKEN,$1.token,
				TREETAG_STRING,$1.string,
				TREETAG_LINE,$1.line,
				TREETAG_COLUMN,$1.column,
				TREETAG_DONE);

	      $$ = t; 
          }
      | LITERAL
          {
	      TREENODE *t;
	      t = AllocTreeNode(TREETAG_TOKEN,$1.token,
				TREETAG_STRING,$1.string,
				TREETAG_LINE,$1.line,
				TREETAG_COLUMN,$1.column,
				TREETAG_DONE);

	      $$ = t;
          }
      ;

/* rules section  */

rules : rule
          {
	      TREENODE *t;
	      t = AllocTreeNode(TREETAG_TOKEN,t_rules,
				TREETAG_STRING,"rules",
				TREETAG_DONE);

	      AddChild(t,$1);
	      $$ = t;
          }
      | rules rule
          {
	      AddChild($1,$2);
	      $$ = $1;
          }
      ;

rule  : IDENTIFIER OR rbody ';'
          {
	      TREENODE *rule, *id, *or;
	      rule = AllocTreeNode(TREETAG_TOKEN,t_rule,
				   TREETAG_STRING,"rule",
				   TREETAG_DONE);

	      id = AllocTreeNode(TREETAG_TOKEN,$1.token,
				 TREETAG_STRING,$1.string,
				 TREETAG_LINE,$1.line,
				 TREETAG_COLUMN,$1.column,
				 TREETAG_DONE);

	      or = AllocTreeNode(TREETAG_TOKEN,$2.token,
				 TREETAG_STRING,$2.string,
				 TREETAG_LINE,$2.line,
				 TREETAG_COLUMN,$2.column,
				 TREETAG_DONE);

	      AddChild(or,$3);
	      AddChildren(rule,id,or,NULL);
	      $$ = rule;
          }
      | IDENTIFIER OR rbody ACTION STRING ';'
          {
	      TREENODE *rule, *id, *action, *string, *or;
	      rule = AllocTreeNode(TREETAG_TOKEN,t_rule,
				   TREETAG_STRING,"rule",
				   TREETAG_DONE);

	      id = AllocTreeNode(TREETAG_TOKEN,$1.token,
				 TREETAG_STRING,$1.string,
				 TREETAG_LINE,$1.line,
				 TREETAG_COLUMN,$1.column,
				 TREETAG_DONE);

	      or = AllocTreeNode(TREETAG_TOKEN,$2.token,
				 TREETAG_STRING,$2.string,
				 TREETAG_LINE,$2.line,
				 TREETAG_COLUMN,$2.column,
				 TREETAG_DONE);

	      action = AllocTreeNode(TREETAG_TOKEN,$4.token,
				     TREETAG_STRING,$4.string,
				     TREETAG_LINE,$4.line,
				     TREETAG_COLUMN,$4.column,
				     TREETAG_DONE);

	      string = AllocTreeNode(TREETAG_TOKEN,$5.token,
				     TREETAG_STRING,$5.string,
				     TREETAG_LINE,$5.line,
				     TREETAG_COLUMN,$5.column,
				     TREETAG_DONE);

	      AddChildren(or,$3,action,string,NULL);
	      AddChildren(rule,id,or,NULL);
	      $$ = rule;
          }
      | IDENTIFIER OR rbody or ';'
          {
	      TREENODE *rule, *id, *or, *t;
	      rule = AllocTreeNode(TREETAG_TOKEN,t_rule,
				   TREETAG_STRING,"rule",
				   TREETAG_DONE);

	      id = AllocTreeNode(TREETAG_TOKEN,$1.token,
				 TREETAG_STRING,$1.string,
				 TREETAG_LINE,$1.line,
				 TREETAG_COLUMN,$1.column,
				 TREETAG_DONE);

	      or = AllocTreeNode(TREETAG_TOKEN,$2.token,
				 TREETAG_STRING,$2.string,
				 TREETAG_LINE,$2.line,
				 TREETAG_COLUMN,$2.column,
				 TREETAG_DONE);

	      AddChild(or,$3);
	      AddChildren(rule,id,or,$4,NULL);
	      Lift($4);
	      /* FreeTreenodeTree($4); */
	      $$ = rule;
	  }
      | IDENTIFIER OR rbody ACTION STRING or ';'
          {
	      TREENODE *rule, *id, *or, *action, *string, *t;
	      rule = AllocTreeNode(TREETAG_TOKEN,t_rule,
				   TREETAG_STRING,"rule",
				   TREETAG_DONE);

	      id = AllocTreeNode(TREETAG_TOKEN,$1.token,
				 TREETAG_STRING,$1.string,
				 TREETAG_LINE,$1.line,
				 TREETAG_COLUMN,$1.column,
				 TREETAG_DONE);

	      or = AllocTreeNode(TREETAG_TOKEN,$2.token,
				 TREETAG_STRING,$2.string,
				 TREETAG_LINE,$2.line,
				 TREETAG_COLUMN,$2.column,
				 TREETAG_DONE);

	      action = AllocTreeNode(TREETAG_TOKEN,$4.token,
				     TREETAG_STRING,$4.string,
				     TREETAG_LINE,$4.line,
				     TREETAG_COLUMN,$4.column,
				     TREETAG_DONE);

	      string = AllocTreeNode(TREETAG_TOKEN,$5.token,
				     TREETAG_STRING,$5.string,
				     TREETAG_LINE,$5.line,
				     TREETAG_COLUMN,$5.column,
				     TREETAG_DONE);

	      AddChildren(or,$3,action,string,NULL);
	      AddChildren(rule,id,or,$6,NULL);
	      Lift($6);
	      /* FreeTreenodeTree($6); */
	      $$ = rule;
	  }
      ;

or    : OR rbody
          {
	      TREENODE *dummy, *or;
	      dummy = AllocTreeNode(TREETAG_STRING,"dummy",
				    TREETAG_DONE);
	      
	      or = AllocTreeNode(TREETAG_TOKEN,$1.token,
				 TREETAG_STRING,$1.string,
				 TREETAG_LINE,$1.line,
				 TREETAG_COLUMN,$1.column,
				 TREETAG_DONE);


	      AddChild(or,$2);
	      AddChild(dummy,or);
	      $$ = dummy;
          }
      | OR rbody ACTION STRING
          {
              TREENODE *dummy, *or, *action, *string;
	      dummy = AllocTreeNode(TREETAG_STRING,"dummy",
				    TREETAG_DONE);

	      or = AllocTreeNode(TREETAG_TOKEN,$1.token,
				 TREETAG_STRING,$1.string,
				 TREETAG_LINE,$1.line,
				 TREETAG_COLUMN,$1.column,
				 TREETAG_DONE);
				 
	      action = AllocTreeNode(TREETAG_TOKEN,$3.token,
				     TREETAG_STRING,$3.string,
				     TREETAG_LINE,$3.line,
				     TREETAG_COLUMN,$3.column,
				     TREETAG_DONE);

	      string = AllocTreeNode(TREETAG_TOKEN,$4.token,
				     TREETAG_STRING,$4.string,
				     TREETAG_LINE,$4.line,
				     TREETAG_COLUMN,$4.column,
				     TREETAG_DONE);

	      AddChildren(or,$2,action,string,NULL);
	      AddChild(dummy,or);
	      $$ = dummy;
	  }
      | or OR rbody
          {
	      TREENODE *or;

	      or = AllocTreeNode(TREETAG_TOKEN,$2.token,
				 TREETAG_STRING,$2.string,
				 TREETAG_LINE,$2.line,
				 TREETAG_COLUMN,$2.column,
				 TREETAG_DONE);
	      
	      AddChild(or,$3);
	      AddChild($1,or);
	      $$ = $1;
	  }
      | or OR rbody ACTION STRING
          {
	      TREENODE *or, *action, *string;

	      or = AllocTreeNode(TREETAG_TOKEN,$2.token,
				 TREETAG_STRING,$2.string,
				 TREETAG_LINE,$2.line,
				 TREETAG_COLUMN,$2.column,
				 TREETAG_DONE);

	      action = AllocTreeNode(TREETAG_TOKEN,$4.token,
				     TREETAG_STRING,$4.string,
				     TREETAG_LINE,$4.line,
				     TREETAG_COLUMN,$4.column,
				     TREETAG_DONE);

	      string = AllocTreeNode(TREETAG_TOKEN,$5.token,
				     TREETAG_STRING,$5.string,
				     TREETAG_LINE,$5.line,
				     TREETAG_COLUMN,$5.column,
				     TREETAG_DONE);

	      AddChildren(or,$3,action,string,NULL);
	      AddChild($1,or);
	      $$ = $1;
	  }
      ;

rbody : /*      empty  */
          {
	      TREENODE *t;
	      t = AllocTreeNode(TREETAG_TOKEN,t_empty,
				TREETAG_STRING,"empty",
				TREETAG_DONE);

	      $$ = t;
          }
      | rexp  /* rbody yid */
          {
	      $$ = $1;
          }
/* | rbody act */
      ;

rexp  : term
          {
	      $$ = $1;
          }
      | PIPE term
          {
	      TREENODE *t;
	      t = AllocTreeNode(TREETAG_TOKEN,$1.token,
				TREETAG_STRING,$1.string,
				TREETAG_LINE,$1.line,
				TREETAG_COLUMN,$1.column,
				TREETAG_DONE);
	      AddChild(t,$2);
	      $$ = t;
          }
      | rexp PIPE term
          {
	      TREENODE *t;
	      t = AllocTreeNode(TREETAG_TOKEN,$2.token,
				TREETAG_STRING,$2.string,
				TREETAG_LINE,$2.line,
				TREETAG_COLUMN,$2.column,
				TREETAG_DONE);
	      AddChildren(t,$1,$3,NULL);
	      $$ = t;
          }
      ;

term  : fact
          {
	      $$ = $1;
          }
      | term fact
          {
	      TREENODE *t;
	      t = AllocTreeNode(TREETAG_TOKEN,t_catenate,
				TREETAG_STRING,"catenate",
				TREETAG_DONE);
	      AddChildren(t,$1,$2,NULL);
	      $$ = t;
          }
      ;

fact  : prim
          {
	      $$ = $1;
          }
      | prim rop
          {
	      AddChild($2,$1);
	      $$ = $2;
          }
      ;


prim  : yid
          {
	      $$ = $1;
          }
      | '(' rexp ')'
          {
	      $$ = $2;
          }
      ;

rop   : PLUS
          {
	      TREENODE *t;
	      t = AllocTreeNode(TREETAG_TOKEN,$1.token,
				TREETAG_STRING,$1.string,
				TREETAG_LINE,$1.line,
				TREETAG_COLUMN,$1.column,
				TREETAG_DONE);
	      $$ = t;
          }
      | STAR
          {
	      TREENODE *t;
	      t = AllocTreeNode(TREETAG_TOKEN,$1.token,
				TREETAG_STRING,$1.string,
				TREETAG_LINE,$1.line,
				TREETAG_COLUMN,$1.column,
				TREETAG_DONE);
	      $$ = t;
          }
      | QUESTION
          {
	      TREENODE *t;
	      t = AllocTreeNode(TREETAG_TOKEN,$1.token,
				TREETAG_STRING,$1.string,
				TREETAG_LINE,$1.line,
				TREETAG_COLUMN,$1.column,
				TREETAG_DONE);
	      $$ = t;
          }
      | LIST prim
          {
	      TREENODE *t;
	      t = AllocTreeNode(TREETAG_TOKEN,$1.token,
				TREETAG_STRING,$1.string,
				TREETAG_LINE,$1.line,
				TREETAG_COLUMN,$1.column,
				TREETAG_DONE);
	      AddChild(t,$2);
	      $$ = t;
          }
      ;
