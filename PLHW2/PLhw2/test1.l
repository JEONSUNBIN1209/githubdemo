%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "y.tab.h"
	void yyerror(char *);
%}

D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			([Ee][+-]?{D}+)
P                       ([Pp][+-]?{D}+)
FS			(f|F|l|L)
IS                      ((u|U)|(u|U)?(l|L|ll|LL)|(l|L|ll|LL)(u|U))

%%
"auto"			{yylval.sval=strdup(yytext); return(AUTO); }
"_Bool"			{yylval.sval=strdup(yytext); return(BOOL); }
"break"			{yylval.sval=strdup(yytext); return(BREAK); }
"case"			{yylval.sval=strdup(yytext); return(CASE); }
"char"			{yylval.sval=strdup(yytext); return(CHAR); }
"_Complex"		{yylval.sval=strdup(yytext); return(COMPLEX); }
"const"			{yylval.sval=strdup(yytext); return(CONST); }
"continue"		{yylval.sval=strdup(yytext); return(CONTINUE); }
"default"		{yylval.sval=strdup(yytext); return(DEFAULT); }
"do"			{yylval.sval=strdup(yytext); return(DO); }
"double"		{yylval.sval=strdup(yytext); return(DOUBLE); }
"else"			{yylval.sval=strdup(yytext); return(ELSE); }
"enum"			{yylval.sval=strdup(yytext); return(ENUM); }
"extern"		{yylval.sval=strdup(yytext); return(EXTERN); }
"float"			{yylval.sval=strdup(yytext); return(FLOAT); }
"for"			{yylval.sval=strdup(yytext); return(FOR); }
"goto"			{yylval.sval=strdup(yytext); return(GOTO); }
"if"			{yylval.sval=strdup(yytext); return(IF); }
"_Imaginary"		{yylval.sval=strdup(yytext); return(IMAGINARY); }
"inline"		{yylval.sval=strdup(yytext); return(INLINE); }
"int"			{yylval.sval=strdup(yytext); return(INT); }
"long"			{yylval.sval=strdup(yytext); return(LONG); }
"register"		{yylval.sval=strdup(yytext); return(REGISTER); }
"restrict"		{yylval.sval=strdup(yytext); return(RESTRICT); }
"return"		{yylval.sval=strdup(yytext); return(RETURN); }
"short"			{yylval.sval=strdup(yytext); return(SHORT); }
"signed"		{yylval.sval=strdup(yytext); return(SIGNED); }
"sizeof"		{yylval.sval=strdup(yytext); return(SIZEOF); }
"static"		{yylval.sval=strdup(yytext); return(STATIC); }
"struct"		{yylval.sval=strdup(yytext); return(STRUCT); }
"switch"		{yylval.sval=strdup(yytext); return(SWITCH); }
"typedef"		{yylval.sval=strdup(yytext); return(TYPEDEF); }
"union"			{yylval.sval=strdup(yytext); return(UNION); }
"unsigned"		{yylval.sval=strdup(yytext); return(UNSIGNED); }
"void"			{yylval.sval=strdup(yytext); return(VOID); }
"volatile"		{yylval.sval=strdup(yytext); return(VOLATILE); }
"while"			{yylval.sval=strdup(yytext); return(WHILE); }

{L}({L}|{D})*		{yylval.sval=strdup(yytext);return(IDENTIFIER); }

[0-9]+		{yylval.sval=strdup(yytext); return(CONSTANT); }

L?\"(\\.|[^\\"\n])*\"	{yylval.sval=strdup(yytext); return(STRING_LITERAL); }

"..."			{yylval.sval=strdup(yytext); return(ELLIPSIS); }
">>="			{yylval.sval=strdup(yytext); return(RIGHT_ASSIGN); }
"<<="			{yylval.sval=strdup(yytext); return(LEFT_ASSIGN); }
"+="			{yylval.sval=strdup(yytext); return(ADD_ASSIGN); }
"-="			{yylval.sval=strdup(yytext); return(SUB_ASSIGN); }
"*="			{yylval.sval=strdup(yytext); return(MUL_ASSIGN); }
"/="			{yylval.sval=strdup(yytext); return(DIV_ASSIGN); }
"%="			{yylval.sval=strdup(yytext); return(MOD_ASSIGN); }
"&="			{yylval.sval=strdup(yytext); return(AND_ASSIGN); }
"^="			{yylval.sval=strdup(yytext); return(XOR_ASSIGN); }
"|="			{yylval.sval=strdup(yytext); return(OR_ASSIGN); }
">>"			{yylval.sval=strdup(yytext); return(RIGHT_OP); }
"<<"			{yylval.sval=strdup(yytext); return(LEFT_OP); }
"++"			{yylval.sval=strdup(yytext); return(INC_OP); }
"--"			{yylval.sval=strdup(yytext); return(DEC_OP); }
"->"			{yylval.sval=strdup(yytext); return(PTR_OP); }
"&&"			{yylval.sval=strdup(yytext); return(AND_OP); }
"||"			{yylval.sval=strdup(yytext); return(OR_OP); }
"<="			{yylval.sval=strdup(yytext); return(LE_OP); }
">="			{yylval.sval=strdup(yytext); return(GE_OP); }
"=="			{yylval.sval=strdup(yytext); return(EQ_OP); }
"!="			{yylval.sval=strdup(yytext); return(NE_OP); }
";"			{ return(';'); }
("{"|"<%")		{ return('{'); }
("}"|"%>")		{ return('}'); }
","			{ return(','); }
":"			{ return(':'); }
"="			{ return('='); }
"("			{ return('('); }
")"			{ return(')'); }
("["|"<:")		{ return('['); }
("]"|":>")		{ return(']'); }
"."			{ return('.'); }
"&"			{ return('&'); }
"!"			{ return('!'); }
"~"			{ return('~'); }
"-"			{ return('-'); }
"+"			{ return('+'); }
"*"			{ return('*'); }
"/"			{ return('/'); }
"%"			{ return('%'); }
"<"			{ return('<'); }
">"			{ return('>'); }
"^"			{ return('^'); }
"|"			{ return('|'); }
"?"			{ return('?'); }

[ \t\v\n\f]		{ }
.			yyerror("invaild char");

%%

int yywrap(void)
{
	return 1;
}
