%{

	#include <stdlib.h>
	#include <stdio.h>
	#include <string.h>
	int yylex(void);
	void yyerror(char *);
	char tokens[1000];
	extern FILE *yyin;
	extern FILE *yyout;
%}
%union{
	char *sval;
}

%token<sval> STRING_LITERAL
%token<sval> IDENTIFIER CONSTANT SIZEOF
%token<sval> PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token<sval> AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token<sval> SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token<sval> XOR_ASSIGN OR_ASSIGN TYPE_NAME

%token<sval> TYPEDEF EXTERN STATIC AUTO REGISTER INLINE RESTRICT
%token<sval> CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token<sval> STRUCT UNION ENUM ELLIPSIS

%token<sval> CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN
%start translation_unit
%%

primary_expression
	: IDENTIFIER	{strcat(tokens,$1);strcat(tokens," ");fprintf(yyout,"%s		shift IDENTIFIER:primary_expression\n",tokens);}
	| CONSTANT	{strcat(tokens,$1);strcat(tokens," ");fprintf(yyout,"%s                shift CONSTANT:primary_expression\n",tokens);}
	| STRING_LITERAL {strcat(tokens,$1);strcat(tokens," ");fprintf(yyout,"%s                shift STRING_LITERAL:primary_expression\n",tokens);}
	|'('	 {strcat(tokens,"( ");fprintf(yyout,"%s                shift (:term1 in primary_expression_expression\n",tokens);}
	 expression	{fprintf(yyout,"%s             reduce  expression:primary_expression\n",tokens);}
	 ')'	{strcat(tokens,") ");fprintf(yyout,"%s                shift ):term3 in primary_expression_expression\n",tokens);}
	;

postfix_expression
	: primary_expression	{fprintf(yyout,"%s		reduce primary_expression:postfix_expression\n",tokens);}
	| postfix_expression '['	{strcat(tokens,"[ ");fprintf(yyout,"%s                shift [:term2 in postfix_expression\n",tokens);}
	expression	 {fprintf(yyout,"%s             reduce expression:postfix_expression\n",tokens);}
	']'	{strcat(tokens,"] ");fprintf(yyout,"%s                shift ]:term4 in postfix_expression\n",tokens);}
	| postfix_expression '('	{strcat(tokens,"( ");fprintf(yyout,"%s                shift (:term2 in postfix_expression\n",tokens);}
	')'	{strcat(tokens,") ");fprintf(yyout,"%s                shift ):term3 in postfix_expression\n",tokens);}
	| postfix_expression '('	{strcat(tokens,"( ");fprintf(yyout,"%s                shift (:term2 in postfix_expression\n",tokens);}
	argument_expression_list	{fprintf(yyout,"%s             reduce  argument_expression_list:postfix_expression\n",tokens);} 
	')'	{strcat(tokens,") ");fprintf(yyout,"%s                shift (:term4 in postfix_expression\n",tokens);}
	| postfix_expression '.'	{strcat(tokens,". ");fprintf(yyout,"%s                shift .:term2 in postfix_expression\n",tokens);}
	IDENTIFIER
	| postfix_expression PTR_OP	{strcat(tokens,$2);strcat(tokens," ");fprintf(yyout,"%s                shift PTR_OP:postfix_expression\n",tokens);}
	IDENTIFIER
	| postfix_expression INC_OP	{strcat(tokens,$2);strcat(tokens," ");fprintf(yyout,"%s                shift INC_OP:postfix_expression\n",tokens);}
	| postfix_expression DEC_OP	{strcat(tokens,$2);strcat(tokens," ");fprintf(yyout,"%s                shift DEC_OP:postfix_expression\n",tokens);}	
	| '(' type_name ')' '{' initializer_list '}'
	| '('  type_name ')' '{' initializer_list ',' '}'
	;


argument_expression_list
	: assignment_expression	 {fprintf(yyout,"%s             reduce assignment_expression:argument_expression_listn\n",tokens);}
	| argument_expression_list ','	{strcat(tokens,", ");fprintf(yyout,"%s                shift ,:term2 in argument_expression_list\n",tokens);}
	assignment_expression	{fprintf(yyout,"%s             reduce assignment_expression:argument_expression_listn\n",tokens);}
	;

unary_expression
	: postfix_expression	{fprintf(yyout,"%s             reduce postfix_expression:unary_expression\n",tokens);}
	| INC_OP	{strcat(tokens,$1);strcat(tokens," ");fprintf(yyout,"%s                shift INC_OP in unary_expression\n",tokens);}
	 unary_expression
	| DEC_OP	{strcat(tokens,$1);strcat(tokens," ");fprintf(yyout,"%s                shift DEC_OP in unary_expression\n",tokens);}
	unary_expression
	| unary_operator cast_expression
	| subroutine8 SIZEOF unary_expression
	| subroutine8 SIZEOF '(' type_name ')'
	;

subroutine8:
	 {strcat(tokens,"sizeof ");fprintf(yyout,"%s		shift SIZEOF:unary_expression\n",tokens);}

unary_operator
	: '&'	{strcat(tokens,"& ");fprintf(yyout,"%s                shift &:term 1 in unary_operator\n",tokens);}
	| '*'	{strcat(tokens,"* ");fprintf(yyout,"%s                shift *:term 1 in unary_operator\n",tokens);}
	| '+'	{strcat(tokens,"+ ");fprintf(yyout,"%s                shift +:term 1 in unary_operator\n",tokens);}
	| '-'	{strcat(tokens,"- ");fprintf(yyout,"%s                shift -:term 1 in unary_operator\n",tokens);}
	| '~'	{strcat(tokens,"& ");fprintf(yyout,"%s                shift ~:term 1 in unary_operator\n",tokens);}
	| '!'	{strcat(tokens,"! ");fprintf(yyout,"%s                shift !:term 1 in unary_operator\n",tokens);}
	;

cast_expression
	: unary_expression	{fprintf(yyout,"%s             reduce unary_expression:cast_expression\n",tokens);}
	| '(' type_name ')' cast_expression
	;

multiplicative_expression
	: cast_expression	{fprintf(yyout,"%s             reduce cast_expression:multiplicative_expression\n",tokens);}
	| multiplicative_expression '*'	{strcat(tokens,"* ");fprintf(yyout,"%s             shift *:term2 in multiplicative_expression\n",tokens);} 
	cast_expression	{fprintf(yyout,"%s             reduce cast_expression:multiplicative_expression\n",tokens);}
	| multiplicative_expression '/'	{strcat(tokens,"* ");fprintf(yyout,"%s             shift /:term2 in multiplicative_expression\n",tokens);}
	 cast_expression	{fprintf(yyout,"%s             reduce cast_expression:multiplicative_expression\n",tokens);}
	| multiplicative_expression '%'	{strcat(tokens,"* ");fprintf(yyout,"%s             shift term2 in multiplicative_expression\n",tokens);}
	 cast_expression	{fprintf(yyout,"%s             reduce cast_expression:multiplicative_expression\n",tokens);}
	;

additive_expression
	: multiplicative_expression	{fprintf(yyout,"%s             reduce multiplicative_expression:additive_expression\n",tokens);}
	| additive_expression '+'	{strcat(tokens,"+ ");fprintf(yyout,"%s             shift +:term2 in additive_expression\n",tokens);}
	 multiplicative_expression	{fprintf(yyout,"%s             reduce multiplicative_expression:additive_expression\n",tokens);}
	| additive_expression
 	'-'	{strcat(tokens,"- ");fprintf(yyout,"%s             shift -:term2 in additive_expression\n",tokens);} 
	multiplicative_expression	{fprintf(yyout,"%s             reduce multiplicative_expression:additive_expression\n",tokens);}
	;

shift_expression
	: additive_expression	{fprintf(yyout,"%s             reduce additive_expression:shift_expression\n",tokens);}
	| shift_expression LEFT_OP	{strcat(tokens,$2);strcat(tokens," ");fprintf(yyout,"%s             shift LEFT_OP in relational_expression\n",tokens);}
	 additive_expression	{fprintf(yyout,"%s             reduce additive_expression:shift_expression\n",tokens);}
	| shift_expression RIGHT_OP	{strcat(tokens,$2);strcat(tokens," ");fprintf(yyout,"%s             shift RIGHT_OP in relational_expression\n",tokens);}
	 additive_expression	{fprintf(yyout,"%s             reduce additive_expression:shift_expression\n",tokens);}
	;

relational_expression
	: shift_expression	{fprintf(yyout,"%s             reduce shift_expression:relational_expression\n",tokens);}
	| relational_expression '<' {strcat(tokens,"< ");fprintf(yyout,"%s		shift <:term2 in relational_expression\n",tokens);}
	shift_expression	{fprintf(yyout,"%s             reduce shift_expression:relational_expression\n",tokens);}
	| relational_expression '>'	 {strcat(tokens,"> ");fprintf(yyout,"%s             shift >:term2 in relational_expression\n",tokens);}
	shift_expression	{fprintf(yyout,"%s             reduce shift_expression:relational_expression\n",tokens);}
	| relational_expression LE_OP	{strcat(tokens,$2);strcat(tokens," ");fprintf(yyout,"%s             shift LE_OP in relational_expression\n",tokens);}
	 shift_expression	{fprintf(yyout,"%s             reduce shift_expression:relational_expression\n",tokens);}
	| relational_expression GE_OP	{strcat(tokens,$2);strcat(tokens," ");fprintf(yyout,"%s             shift GE_OP in relational_expression\n",tokens);}
	shift_expression	{fprintf(yyout,"%s             reduce shift_expression:relational_expression\n",tokens);}
	;

equality_expression
	: relational_expression	{fprintf(yyout,"%s             reduce relational_expression:equality_expression\n",tokens);}
	| equality_expression EQ_OP	{strcat(tokens,$2);strcat(tokens," ");fprintf(yyout,"%s             shift EQ_OP in equality_expression\n",tokens);}
	 relational_expression	{fprintf(yyout,"%s             reduce relational_expression:equality_expression\n",tokens);}
	| equality_expression NE_OP	{strcat(tokens,$2);strcat(tokens," ");fprintf(yyout,"%s             shift NE_OP in equality_expression\n",tokens);}
	 relational_expression	{fprintf(yyout,"%s             reduce relational_expression:equality_expression\n",tokens);}
	;

and_expression
	: equality_expression	{fprintf(yyout,"%s             reduce equality_expression:and_expression\n",tokens);}
	| and_expression '&'	{strcat(tokens,"& ");fprintf(yyout,"%s             shift &:term2 in and_expression\n",tokens);}
	equality_expression	{fprintf(yyout,"%s             reduce equality_expression:and_expression\n",tokens);}
	;

exclusive_or_expression
	: and_expression	{fprintf(yyout,"%s             reduce and_expression:exclusive_or_expression\n",tokens);}
	| exclusive_or_expression '^'	{strcat(tokens,"^ ");fprintf(yyout,"%s             shift ^:term2 in exclusive_or_expression\n",tokens);}
	and_expression	{fprintf(yyout,"%s             reduce and_expression:exclusive_or_expression\n",tokens);}
	;

inclusive_or_expression
	: exclusive_or_expression	{fprintf(yyout,"%s             reduce exclusive_or_expression:inclusive_or_expression\n",tokens);}
	| inclusive_or_expression '|'	 {strcat(tokens,"| ");fprintf(yyout,"%s             shift |:term2 in inclusive_or_expression\n",tokens);}
	exclusive_or_expression	{fprintf(yyout,"%s             reduce exclusive_or_expression:inclusive_or_expression\n",tokens);}
	;

logical_and_expression
	: inclusive_or_expression	{fprintf(yyout,"%s             reduce inclusive_or_expression:logical_and_expression\n",tokens);}
	| logical_and_expression AND_OP	 {strcat(tokens,$2);strcat(tokens," ");fprintf(yyout,"%s             shift AND_OP in logical_and_expression\n",tokens);}
	 inclusive_or_expression	{fprintf(yyout,"%s             reduce inclusive_or_expression:logical_and_expression\n",tokens);}
	;

logical_or_expression
	: logical_and_expression	{fprintf(yyout,"%s             reduce logical_and_expression:logical_or_expression\n",tokens);}
	| logical_or_expression OR_OP	{strcat(tokens,$2);strcat(tokens," ");fprintf(yyout,"%s             shift OR_OP in logical_or_expression\n",tokens);}
	 logical_and_expression	{fprintf(yyout,"%s             reduce logical_and_expression:logical_or_expression\n",tokens);}
	;

conditional_expression
	: logical_or_expression	{fprintf(yyout,"%s             reduce logical_or_expression:conditional_expression\n",tokens);}
	| logical_or_expression '?' expression ':' conditional_expression
	;

assignment_expression
	: conditional_expression	{fprintf(yyout,"%s		reduce conditional_expression:assignment_expression\n",tokens);}
	| unary_expression	{fprintf(yyout,"%s             reduce unary_expression:assignment_expression\n",tokens);}
	assignment_operator	{fprintf(yyout,"%s             reduce assignment_operator:assignment_expression\n",tokens);}
	assignment_expression
	;

assignment_operator
	: '='	{strcat(tokens,"= ");fprintf(yyout,"%s                =:term 1 in assignment_operator\n",tokens);}
	| MUL_ASSIGN	{strcat(tokens,$1);strcat(tokens," ");fprintf(yyout,"%s                MUL_ASSIGN in assignment_operator\n",tokens);}
	| DIV_ASSIGN	{strcat(tokens,$1);strcat(tokens," ");fprintf(yyout,"%s                DIV_ASSIGN in assignment_operator\n",tokens);}
	| MOD_ASSIGN	{strcat(tokens,$1);strcat(tokens," ");fprintf(yyout,"%s                MOD_ASSIGN in assignment_operator\n",tokens);}
	| ADD_ASSIGN	{strcat(tokens,$1);strcat(tokens," ");fprintf(yyout,"%s                ADD_ASSIGN in assignment_operator\n",tokens);}
	| SUB_ASSIGN	{strcat(tokens,$1);strcat(tokens," ");fprintf(yyout,"%s                SUB_ASSIGN in assignment_operator\n",tokens);}
	| LEFT_ASSIGN	{strcat(tokens,$1);strcat(tokens," ");fprintf(yyout,"%s                LEFT_ASSIGN in assignment_operator\n",tokens);}
	| RIGHT_ASSIGN	{strcat(tokens,$1);strcat(tokens," ");fprintf(yyout,"%s                RIGHT_ASSIGN in assignment_operator\n",tokens);}
	| AND_ASSIGN	{strcat(tokens,$1);strcat(tokens," ");fprintf(yyout,"%s                AND_ASSIGN in assignment_operator\n",tokens);}
	| XOR_ASSIGN	{strcat(tokens,$1);strcat(tokens," ");fprintf(yyout,"%s                XOR_ASSIGN in assignment_operator\n",tokens);}
	| OR_ASSIGN	{strcat(tokens,$1);strcat(tokens," ");fprintf(yyout,"%s                OR_ASSIGN in assignment_operator\n",tokens);}
	;

expression
	: assignment_expression	{fprintf(yyout,"%s             reduce assignment_expression:expression\n",tokens);}
	| expression ','	{strcat(tokens,", ");fprintf(yyout,"%s                ,:term 2 in expression\n",tokens);}
	assignment_expression	{fprintf(yyout,"%s             reduce assignment_expression:expression\n",tokens);}
	;

constant_expression
	: conditional_expression	 {fprintf(yyout,"%s             reduce conditional_expression:constant_expression\n",tokens);}
 	;

declaration
	: declaration_specifiers ';' declarationsubroutine1
	| declaration_specifiers init_declarator_list ';' declarationsubroutine2
	;

declarationsubroutine1:
	{fprintf(yyout,"%s             reduce declaration_specifiers:declaration\n",tokens);}
	{strcat(tokens,"; ");fprintf(yyout,"%s                ;:term2 in declaration\n",tokens);memset(tokens,0,sizeof(char)*1000);}
declarationsubroutine2:
	{fprintf(yyout,"%s             reduce init_declarator_list:declaration\n",tokens);
	strcat(tokens,"; ");fprintf(yyout,"%s                ;:term3 in declaration\n",tokens);memset(tokens,0,sizeof(char)*1000);}

declaration_specifiers
	: storage_class_specifier	{fprintf(yyout,"%s             reduce storage_class_specifier:declaration_specifiers\n",tokens);}
	| storage_class_specifier	{fprintf(yyout,"%s             reduce storage_class_specifier:declaration_specifiers\n",tokens);}
	declaration_specifiers	{fprintf(yyout,"%s             reduce declaration_specifiers:declaration_specifiers\n",tokens);}
	| type_specifier	{fprintf(yyout,"%s             reduce type_specifier:declaration_specifiers\n",tokens);}
	| type_specifier	{fprintf(yyout,"%s             reduce type_specifier:declaration_specifiers\n",tokens);}
	declaration_specifiers	{fprintf(yyout,"%s             reduce declaration_specifiers:declaration_specifiers\n",tokens);}
	| type_qualifier	{fprintf(yyout,"%s             reduce type_qualifier:declaration_specifiers\n",tokens);}
	| type_qualifier	{fprintf(yyout,"%s             reduce type_qualifier:declaration_specifiers\n",tokens);}
	declaration_specifiers	{fprintf(yyout,"%s             reduce declaration_specifiers:declaration_specifiers\n",tokens);}
	
	;

init_declarator_list
	: init_declarator	{fprintf(yyout,"%s		reduce init_declarator:init_declarator_list\n",tokens);}
	| init_declarator_list ','	{strcat(tokens,", ");fprintf(yyout,"%s		,:term2 in init_declarator_list\n",tokens);} 
	init_declarator	{fprintf(yyout,"%s             reduce init_declarator:init_declarator_list\n",tokens);}
	;

init_declarator
	: declarator	{fprintf(yyout,"%s             reduce declarator:init_declarator\n",tokens);}
	| declarator	{fprintf(yyout,"%s             reduce declarator:init_declarator\n",tokens);}
	'='	{strcat(tokens,"= ");fprintf(yyout,"%s         =:term2 in init_declarator_list\n",tokens);}
	 initializer	{fprintf(yyout,"%s             reduce initializer:init_declarator\n",tokens);}
	;

storage_class_specifier
	: TYPEDEF
	| EXTERN
	| STATIC
	| AUTO
	| REGISTER
	;

type_specifier
	: VOID	{strcat(tokens,$1);strcat(tokens," ");fprintf(yyout,"%s                shift VOID:type_specifier\n",tokens);}
	| CHAR	{strcat(tokens,$1);strcat(tokens," ");fprintf(yyout,"%s                shift CHAR:type_specifier\n",tokens);}
	| SHORT	{strcat(tokens,$1);strcat(tokens," ");fprintf(yyout,"%s                shift SHORT:type_specifier\n",tokens);}
	| INT	{strcat(tokens,$1);strcat(tokens," ");fprintf(yyout,"%s                shift INT:type_specifier\n",tokens);}
	| LONG	{strcat(tokens,$1);strcat(tokens," ");fprintf(yyout,"%s                shift LONG:type_specifier\n",tokens);}
	| FLOAT	{strcat(tokens,$1);strcat(tokens," ");fprintf(yyout,"%s                shift FLOAT:type_specifier\n",tokens);}
	| DOUBLE	{strcat(tokens,$1);strcat(tokens," ");fprintf(yyout,"%s               shift DOUBLE:type_specifier\n",tokens);}
	| SIGNED	{strcat(tokens,$1);strcat(tokens," ");fprintf(yyout,"%s               shift SIGNED:type_specifier\n",tokens);}
	| UNSIGNED	{strcat(tokens,$1);strcat(tokens," ");fprintf(yyout,"%s               shift UNSIGNED:type_specifier\n",tokens);}
	| struct_or_union_specifier
	| enum_specifier
	| TYPE_NAME	{strcat(tokens,$1);strcat(tokens," ");fprintf(yyout,"%s                shift TYPE_NAME:type_specifier\n",tokens);}
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER '{' struct_declaration_list '}'
	| struct_or_union '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER
	;

struct_or_union
	: STRUCT
	| UNION
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list ';'
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	| type_qualifier specifier_qualifier_list
	| type_qualifier
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list ',' struct_declarator
	;

struct_declarator
	: declarator
	| ':' constant_expression
	| declarator ':' constant_expression
	;

enum_specifier
	: ENUM '{' enumerator_list '}'
	| ENUM IDENTIFIER '{' enumerator_list '}'
	| ENUM '{' enumerator_list ',' '}'
	| ENUM IDENTIFIER '{' enumerator_list ',' '}'
	| ENUM IDENTIFIER
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator
	;

enumerator
	: IDENTIFIER
	| IDENTIFIER '=' constant_expression
	;

type_qualifier
	: CONST	{strcat(tokens,$1);strcat(tokens," ");fprintf(yyout,"%s                CONST:type_qualifier\n",tokens);}
	| RESTRICT
	| VOLATILE
	;

declarator
	: pointer direct_declarator {fprintf(yyout,"%s		reduce direct_declarator:declarator\n",tokens);}
	| direct_declarator	{fprintf(yyout,"%s             reduce direct_declarator:declarator\n",tokens);}
	;

direct_declarator
	: IDENTIFIER {strcat(tokens,$1);strcat(tokens," ");fprintf(yyout,"%s                shift IDENTIFIER:direct_declarator\n",tokens);}
	| '(' declarator ')'
	| direct_declarator subroutine4 '[' subroutine5 type_qualifier_list assignment_expression ']' subroutine6
	| direct_declarator subroutine4 '[' subroutine5 type_qualifier_list ']'	{strcat(tokens,"] ");fprintf(yyout,"%s         shift ]:term4 in direct_declarator\n",tokens);}
	| direct_declarator subroutine4 '[' assignment_expression {fprintf(yyout,"%s             reduce assignment_expression:direct_declarator\n",tokens);} 
	']'	{strcat(tokens,"] ");fprintf(yyout,"%s         shift [:term2 in direct_declarator\n",tokens);}
	| direct_declarator subroutine4 '[' STATIC type_qualifier_list assignment_expression ']'
	| direct_declarator subroutine4 '[' subroutine5 type_qualifier_list STATIC assignment_expression ']'
	| direct_declarator subroutine4 '[' subroutine5 type_qualifier_list '*' ']' {strcat(tokens,"* ");fprintf(yyout,"%s         shift *:term4 in direct_declarator\n",tokens);}{strcat(tokens,"] ");fprintf(yyout,",%s         shift ]:term5 in direct_declarator\n",tokens);} 
	| direct_declarator subroutine4 '[' '*' ']' {strcat(tokens,"* ");fprintf(yyout,"%s         shift *:term3 in direct_declarator\n",tokens);}{strcat(tokens,"] ");printf("%s         shift ]:term4 in direct_declarator\n",tokens);}
	| direct_declarator subroutine4 '[' ']' {strcat(tokens,"] ");fprintf(yyout,"%s         shift ]:term3 in direct_declarator\n",tokens);}
	| direct_declarator '('	{strcat(tokens,"( ");fprintf(yyout,"%s         shift (:term2 in direct_declarator\n",tokens);}
	parameter_type_list {fprintf(yyout,"%s             reduce parameter_type_list:direct_declarator\n",tokens);}
	')'	{strcat(tokens,") ");fprintf(yyout,"%s         shift ):term4 in direct_declarator\n",tokens);}
	| direct_declarator '(' {strcat(tokens,"( ");fprintf(yyout,"%s         shift (:term2 in direct_declarator\n",tokens);}
	identifier_list	{fprintf(yyout,"%s             reduce identifier_list:direct_declarator\n",tokens);}
	')'	{strcat(tokens,") ");fprintf(yyout,"%s         shift ):term4 in direct_declarator\n",tokens);}
	| direct_declarator '('	{strcat(tokens,"( ");fprintf(yyout,"%s         shift (:term2 in direct_declarator\n",tokens);} 
	 ')' {strcat(tokens,"( ");fprintf(yyout,"%s         shift ):term3 in direct_declarator\n",tokens);}
	;

subroutine4:
	   {strcat(tokens,"[ ");fprintf(yyout,"%s         shift [:term2 in direct_declarator\n",tokens);}
subroutine5:
	   {fprintf(yyout,"%s		reduce type_qualifier_list:direct_declarator\n",tokens);}
subroutine6:
           {fprintf(yyout,"%s          reduce assignment_expression:direct_declarator\n",tokens);}
	   {strcat(tokens,"] ");fprintf(yyout,"%s         shift [:term5 in direct_declarator\n",tokens);}

pointer
	: '*' subroutine7
	| '*' subroutine7 type_qualifier_list {fprintf(yyout,"%s             reduce type_qualifier_list:pointer\n",tokens);}
	| '*' subroutine7 pointer
	| '*' subroutine7 type_qualifier_list pointer
	;
subroutine7:
	   {strcat(tokens,"* ");fprintf(yyout,"%s         shift *:term1 in pointer\n",tokens);}

type_qualifier_list
	: type_qualifier	{fprintf(yyout,"%s		reduce type_qualifier:type_qualifier_list\n",tokens);}
	| type_qualifier_list type_qualifier {fprintf(yyout,"%s             reduce type_qualifier:type_qualifier_list\n",tokens);}
	;


parameter_type_list
	: parameter_list	 {fprintf(yyout,"%s             reduce parameter_list:parameter_type_list\n",tokens);}
	| parameter_list ',' ELLIPSIS
	;

parameter_list
	: parameter_declaration	 {fprintf(yyout,"%s             reduce  parameter_declaration:parameter_list\n",tokens);}
	| parameter_list ','	{strcat(tokens,", ");fprintf(yyout,"%s         shift ,:term2 in parameter_list\n",tokens);}
	 parameter_declaration {fprintf(yyout,"%s             reduce  parameter_declaration:parameter_list\n",tokens);}
	;

parameter_declaration
	: declaration_specifiers
	declarator	{fprintf(yyout,"%s             reduce declarator:parameter_declaration\n",tokens);}
	| declaration_specifiers abstract_declarator	{fprintf(yyout,"%s             reduce abstract_declarator:parameter_declaration\n",tokens);}
	| declaration_specifiers	{fprintf(yyout,"%s             reduce declaration_specifiers:parameter_declaration\n",tokens);}
	;

identifier_list
	: IDENTIFIER	{strcat(tokens,$1);strcat(tokens," ");fprintf(yyout,"%s		shift IDENTIFIER:identifier_list\n",tokens);}
	| identifier_list ','	{strcat(tokens,", ");fprintf(yyout,"%s         shift ,:term2 in identifier_list\n",tokens);} 
	IDENTIFIER
	;

type_name
	: specifier_qualifier_list	{fprintf(yyout,"%s          reduce specifier_qualifier_list:type_name\n",tokens);}
	| specifier_qualifier_list 	 {fprintf(yyout,"%s          reduce specifier_qualifier_list:type_name\n",tokens);}
	abstract_declarator  {fprintf(yyout,"%s          reduce abstract_declarator:type_name\n",tokens);}
	;

abstract_declarator
	: pointer	{fprintf(yyout,"%s             reduce pointer:abstract_declarator\n",tokens);}
	| direct_abstract_declarator	{fprintf(yyout,"%s             reduce direct_abstract_declarator:abstract_declarator\n",tokens);}
	| pointer direct_abstract_declarator
	;

direct_abstract_declarator
	: '(' abstract_declarator
	 ')' {strcat(tokens,") ");fprintf(yyout,"%s         shift ):term3 in direct_abstract_declarator\n",tokens);}
	| '(' parameter_type_list
	')'  {strcat(tokens,") ");fprintf(yyout,"%s         shift ):term3 in direct_abstract_declarator\n",tokens);}
	| '(' ')' {strcat(tokens,"( ");fprintf(yyout,"%s         shift (:term1 in direct_abstract_declarator\n",tokens);}{strcat(tokens,") ");fprintf(yyout,"%s         shift ):term2 in direct_abstract_declarator\n",tokens);}
	| subroutine3 '[' ']' {strcat(tokens,"[ ");fprintf(yyout,"%s         shift ]:term2 in direct_abstract_declarator\n",tokens);}
	| subroutine3 '[' assignment_expression ']' {fprintf(yyout,"%s             reduce assignment_expression:direct_abstract_declarator\n",tokens);}
	{strcat(tokens,"[ ");fprintf(yyout,"%s         shift ]:term3 in direct_abstract_declarator\n",tokens);}
	| direct_abstract_declarator subroutine2 '[' ']' {strcat(tokens,"] ");fprintf(yyout,"%s         shift ]:term3 in direct_abstract_declarator\n",tokens);}
	| direct_abstract_declarator subroutine2 '[' assignment_expression ']' {fprintf(yyout,"%s             reduce assignment_expression:direct_abstract_declarator\n",tokens);fprintf(yyout,"%s         shift ]:term4 in direct_abstract_declarator\n",tokens);}
	| subroutine3 '[' '*' ']' {strcat(tokens,"* ");fprintf(yyout,"%s         shift *:term2 in direct_abstract_declarator\n",tokens);}{strcat(tokens,"] ");fprintf(yyout,"%s         shift ]:term3 in direct_abstract_declarator\n",tokens);}
	| direct_abstract_declarator subroutine2 '[' '*' ']' {strcat(tokens,"* ");fprintf(yyout,"%s         shift *:term3 in direct_abstract_declarator\n",tokens);}{strcat(tokens,"] ");fprintf(yyout,"%s         shift ]:term4 in direct_abstract_declarator\n",tokens);}
	| direct_abstract_declarator '(' ')'  {strcat(tokens,"( ");fprintf(yyout,"%s         shift (:term2 in direct_abstract_declarator\n",tokens);}{strcat(tokens,") ");fprintf(yyout,"%s         shift ):term3 in direct_abstract_declarator\n",tokens);}
	| direct_abstract_declarator '('  {strcat(tokens,"( ");fprintf(yyout,"%s         shift (:term2 in direct_abstract_declarator\n",tokens);}
	parameter_type_list {fprintf(yyout,"%s             reduce  parameter_type_list:direct_abstract_declarator\n",tokens);}
	')'{strcat(tokens,") ");fprintf(yyout,"%s         shift ):term4 in direct_abstract_declarator\n",tokens);}
	;

subroutine2:
        {strcat(tokens,"[ ");fprintf(yyout,"%s         shift [:term1 in direct_abstract_declarator\n",tokens);}
subroutine3:
	{strcat(tokens,"[ ");fprintf(yyout,"%s         shift [:term2 in direct_abstract_declarator\n",tokens);}

initializer
	: assignment_expression	{fprintf(yyout,"%s             reduce  assignment_expression:initializer\n",tokens);}
	| subroutine1 '{' initializer_list '}'	{fprintf(yyout,"%s		reduce initializer_list:initializer\n",tokens);} {strcat(tokens,"} ");fprintf(yyout,"%s              shift }:term3 in initializer\n",tokens);memset(tokens,0,sizeof(char)*1000);}
	| subroutine1 '{' initializer_list ',' '}'	{fprintf(yyout,"%s             reduce initializer_list:initializer\n",tokens);}{strcat(tokens,", ");fprintf(yyout,"%s              shift ,:term3 in initializer\n",tokens);} {strcat(tokens,"} ");fprintf(yyout,"%s              shift }:term4 in initializer\n",tokens);memset(tokens,0,sizeof(char)*1000);}
	;

subroutine1:
	   {strcat(tokens,"{ ");fprintf(yyout,"%s		shift {:term1 in initializer\n",tokens);memset(tokens,0,sizeof(char)*1000);}


initializer_list
	: initializer	{fprintf(yyout,"%s		reduce initializer:initializer_list\n",tokens);}
	| designation initializer
	| initializer_list ',' initializer
	| initializer_list ',' designation initializer
	;

designation
	: designator_list '='
	;

designator_list
	: designator
	| designator_list designator
	;

designator
	: '[' constant_expression ']'
	| '.' IDENTIFIER
	;

statement
	: labeled_statement	{fprintf(yyout,"%s		reduce labeled_statement:statement\n",tokens);}
	| compound_statement	{fprintf(yyout,"%s             reduce compound_statement:statement\n",tokens);}
	| expression_statement	{fprintf(yyout,"%s             reduce expression_statement:statement\n",tokens);}
	| selection_statement	{fprintf(yyout,"%s             reduce expression_statement:statement\n",tokens);}
	| iteration_statement	{fprintf(yyout,"%s             reduce iteration_statement:statement\n",tokens);}
	| jump_statement	{fprintf(yyout,"%s             reduce jump_statement:statement\n",tokens);}
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

compound_statement
	: '{'	{strcat(tokens,"{ ");fprintf(yyout,"%s		{:term1 in compound_statement\n",tokens);memset(tokens,0,sizeof(char)*1000);}
	'}'	{strcat(tokens,"} ");fprintf(yyout,"%s         }:term2 in compound_statement\n",tokens);memset(tokens,0,sizeof(char)*1000);}
	| '{'	{strcat(tokens,"{ ");fprintf(yyout,"%s         {:term1 in compound_statement\n",tokens);memset(tokens,0,sizeof(char)*1000);}
	block_item_list {fprintf(yyout,"%s		reduce block_item_list:compound_statement\n",tokens);}
	 '}'	{strcat(tokens,"} ");fprintf(yyout,"%s         }:term2 in compound_statement\n",tokens);memset(tokens,0,sizeof(char)*1000);}
	;

block_item_list
	: block_item	{fprintf(yyout,"%s		reduce block_item:block_item_list\n",tokens);}
	| block_item_list block_item	{fprintf(yyout,"%s             reduce block_item:block_item_list\n",tokens);}
	;

block_item
	: declaration	{fprintf(yyout,"%s             reduce block_item:block_item\n",tokens);}
	| statement	{fprintf(yyout,"%s             reduce statement:block_item\n",tokens);}
	;

expression_statement
	: ';'	{strcat(tokens,"; ");fprintf(yyout,"%s         ;:term1 in expression_statement\n",tokens);memset(tokens,0,sizeof(char)*1000);}
	| expression	{fprintf(yyout,"%s		reduce expression:expression_statement\n",tokens);}
	';'	{strcat(tokens,"; ");fprintf(yyout,"%s         ;:term2 in expression_statement\n",tokens);memset(tokens,0,sizeof(char)*1000);}
	;

selection_statement
	: IF ifsubroutine '(' expression ifsubroutine2 ')' statement ifsubroutine3
	ELSE	{strcat(tokens,"else ");fprintf(yyout,"%s         ELSE:selection_statement\n",tokens);}
        statement	{fprintf(yyout,"%s             reduce statement:selection_statement\n",tokens);}
	|IF ifsubroutine '(' expression ifsubroutine2 ')' statement ifsubroutine3
	| SWITCH '('expression ')' statement
	;

ifsubroutine:
	  {strcat(tokens,"if ");fprintf(yyout,"%s         IF:selection_statement\n",tokens);
	  strcat(tokens,"( ");fprintf(yyout,"%s         (:term2 in selection_statement\n",tokens);}

ifsubroutine2:	
	{fprintf(yyout,"%s             reduce expression:selection_statement\n",tokens);
	strcat(tokens,") ");fprintf(yyout,"%s         ):term4 in selection_statement\n",tokens);}

ifsubroutine3:
	{fprintf(yyout,"%s             reduce statement:selection_statement\n",tokens);}

iteration_statement
	: WHILE	{strcat(tokens,$1);strcat(tokens," ");fprintf(yyout,"%s		shift WHILE:iteration_statement\n",tokens);}
	 '('	{strcat(tokens,"( ");fprintf(yyout,"%s                shift (:term2 in iteration_statement\n",tokens);}
	 expression	{fprintf(yyout,"%s             reduce expression:iteration_statement\n",tokens);} 
	')'	{strcat(tokens,") ");fprintf(yyout,"%s                shift ):term4 in iteration_statement\n",tokens);}
	statement	{fprintf(yyout,"%s                reduce statement:iteration_statement\n",tokens);}
	| DO	{strcat(tokens,$1);strcat(tokens," ");fprintf(yyout,"%s                shift DO:iteration_statement\n",tokens);}  
	statement
	WHILE	{strcat(tokens,"while ");fprintf(yyout,"%s                shift WHILE:iteration_statement\n",tokens);}
	'('	{strcat(tokens,"( ");fprintf(yyout,"%s                shift (:term4 in iteration_statement\n",tokens);}
	expression 	{fprintf(yyout,"%s             reduce expression:iteration_statement\n",tokens);}
	')' 	{strcat(tokens,") ");fprintf(yyout,"%s                shift ):term6 in iteration_statement\n",tokens);}
	';'	{strcat(tokens,"; ");fprintf(yyout,"%s                shift ;:term7 in iteration_statement\n",tokens);memset(tokens,0,sizeof(char)*1000);}
	| FOR forsubroutine '('	expression_statement forsubroutine2  expression_statement forsubroutine2  ')' forsubroutine5  statement forsubroutine4
	| FOR forsubroutine '('	expression_statement forsubroutine2 expression_statement forsubroutine2 expression forsubroutine3 ')' forsubroutine5  statement forsubroutine4
	| FOR forsubroutine '('	declaration forsubroutine6 expression_statement forsubroutine2 ')' forsubroutine5  statement forsubroutine4
	| FOR forsubroutine '('	declaration forsubroutine6 expression_statement forsubroutine2 expression forsubroutine3 ')' forsubroutine5 statement forsubroutine4
	;

forsubroutine:
	    {strcat(tokens,"for ");fprintf(yyout,"%s                shift FOR:iteration_statement\n",tokens);
	     strcat(tokens,"( ");fprintf(yyout,"%s                shift (:term2 in iteration_statement\n",tokens);}
forsubroutine2:
	{fprintf(yyout,"%s             reduce expression_statement:iteration_statement\n",tokens);}
forsubroutine3:
        {fprintf(yyout,"%s             reduce expression:iteration_statement\n",tokens);}
forsubroutine4:
	{fprintf(yyout,"%s             reduce statement:iteration_statement\n",tokens);}	
forsubroutine5:
         {strcat(tokens,") ");fprintf(yyout,"%s                shift ):term in iteration_statement\n",tokens);}
forsubroutine6:
	 {fprintf(yyout,"%s             reduce declaration:iteration_statement\n",tokens);}

jump_statement
	: GOTO IDENTIFIER ';'
	| CONTINUE	{strcat(tokens,$1);strcat(tokens," ");fprintf(yyout,"%s                shift CONTINUE:jump_statement\n",tokens);}
	';'	{strcat(tokens,"; ");fprintf(yyout,"%s                shift ;:term2 in jump_statement\n",tokens);memset(tokens,0,sizeof(char)*1000);}
	| BREAK	{strcat(tokens,$1);strcat(tokens," ");fprintf(yyout,"%s                shift BREAK:jump_statement\n",tokens);}
	';'	{strcat(tokens,"; ");fprintf(yyout,"%s                shift ;:term2 in jump_statement\n",tokens);memset(tokens,0,sizeof(char)*1000);}
	| RETURN {strcat(tokens,$1);strcat(tokens," ");fprintf(yyout,"%s               shift RETURN in jump_statement\n",tokens);}
	';'    {strcat(tokens,"; ");fprintf(yyout,"%s               shift ;:term2 in jump_statement\n",tokens);}
	| RETURN {strcat(tokens,$1);strcat(tokens," ");fprintf(yyout,"%s               shift RETURN in jump_statement\n",tokens);}
	 expression	{fprintf(yyout,"%s             reduce expression:jump_statement\n",tokens);}
	 ';'	{strcat(tokens,"; ");fprintf(yyout,"%s               shift ;:term2 in jump_statement\n",tokens);memset(tokens,0,sizeof(char)*1000);}
	;

translation_unit
	: external_declaration	{fprintf(yyout,"%s		reduce external_declaration:translation_unit\n",tokens);}
	| translation_unit
	external_declaration	{fprintf(yyout,"%s             reduce external_declaration:translation_unit\n",tokens);}
	;

external_declaration
	: function_definition	{fprintf(yyout,"%s             reduce function_definition:external_declaration\n",tokens);}
	| declaration	{fprintf(yyout,"%s             reduce declaration:external_declaration\n",tokens);}
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement {fprintf(yyout,"%s             reduce compound_statementfunction_definition\n",tokens);}
	| declaration_specifiers declarator compound_statement	{fprintf(yyout,"%s             reduce compound_statementfunction_definition\n",tokens);}
	;


declaration_list
	: declaration	{fprintf(yyout,"%s             reduce declaration:declaration_list\n",tokens);}
	| declaration_list declaration	{fprintf(yyout,"%s             reduce declaration:declaration_list\n",tokens);}
	;


%%
#include <stdio.h>

extern char yytext[];
extern int column;

void yyerror(char *s)
{
	fprintf(stderr,"%s \n",s);
}

int main(int argc,char *argv[]){

	yyin = fopen(argv[1],"r");
	yyout = fopen(strcat(argv[1],"_B735432.output"),"w");
	yyparse();
	return 0;
}
