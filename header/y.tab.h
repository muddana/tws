
typedef union
#ifdef __cplusplus
	YYSTYPE
#endif
 {
  struct { char *id; int leng; } string;
} YYSTYPE;
extern YYSTYPE yylval;
# define ID 257
# define LABEL 258
# define NL 259
# define WHITE 260

int yyparse(void);
