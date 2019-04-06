/* 
    minir.y

    flex minir.l
    bison minir.y
    g++ minir.tab.c -o parser
    ./parser < inputFileName
    
*/

%{
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <stack>
#include "SymbolTable.h"
using namespace std;

int line_num = 1;
bool assignment_statement = false;
bool isIntOrFloatOrBoolCompatible(const int theType);
bool isIntCompatible(const int theType);
bool isBoolCompatible(const int theType);
bool isFloatCompatible(const int theType);
bool isInvalidOperandType(const int theType);

stack<SYMBOL_TABLE> scopeStack; // stack of scope hashtables
int x=0;
void beginScope();
void endScope();
void cleanUp();
TYPE_INFO findEntryInAnyScope(const string the_name);
bool pdf;
void printTokenInfo(const char* token_type, const char* lexeme);

void printRule(const char *, const char *);

int yyerror(const char *s) 
{
    printf("Line %d: %s\n", line_num, s);
    cleanUp();
    exit(1);
}

extern "C" 
{
    int yyparse(void);
    int yylex(void);
    int yywrap() { return 1; }
}

%}

%union {
    char* text;
    TYPE_INFO typeInfo;
	int argnum;
	bool flag;
};

%token T_IDENT T_INTCONST T_FLOATCONST T_UNKNOWN T_STRCONST 
%token T_IF T_ELSE
%token T_WHILE T_FUNCTION T_FOR T_IN T_NEXT T_BREAK 
%token T_TRUE T_FALSE T_QUIT
%token T_PRINT T_CAT T_READ T_LPAREN T_RPAREN T_LBRACE 
%token T_RBRACE T_LBRACKET
%token T_RBRACKET T_SEMICOLON T_COMMA T_ADD T_SUB 
%token T_MULT T_DIV T_MOD
%token T_POW T_LT T_LE T_GT T_GE T_EQ T_NE T_NOT T_AND 
%token T_OR T_ASSIGN T_LIST

%type <text> T_IDENT
%type <typeInfo> N_ARGS N_ARG_LIST N_NO_ARGS
%type <typeInfo> N_CONST N_EXPR N_IF_EXPR N_WHILE_EXPR N_FOR_EXPR N_COMPOUND_EXPR N_ASSIGNMENT_EXPR 
%type <typeInfo> N_OUTPUT_EXPR N_INPUT_EXPR N_LIST_EXPR N_FUNCTION_DEF N_QUIT_EXPR N_EXPR_LIST N_INDEX N_FUNCTION_CALL 
%type <typeInfo> N_ADD_OP N_MULT_OP N_ARITHLOGIC_EXPR N_SIMPLE_ARITHLOGIC N_ADD_OP_LIST N_TERM N_MULT_OP_LIST N_FACTOR 
%type <typeInfo> N_SINGLE_ELEMENT N_ENTIRE_VAR N_VAR N_COND_IF N_THEN_EXPR
/*
 *  To eliminate ambiguity in if/else
 */
%nonassoc   T_RPAREN 
%nonassoc   T_ELSE


%start N_START

%%

N_START         : N_EXPR
                {
                    printRule("START", "EXPR");
                    endScope();
                    printf("\n---- Completed parsing ----\n\n");
                    return 0;
                }
                ;
N_EXPR          : N_IF_EXPR
                {
                    printRule("EXPR", "IF_EXPR");
                    $$.type = $1.type;
                    $$.numParams = $1.numParams;
                    $$.returnType = $1.returnType;
                }
                | N_WHILE_EXPR
                {
                    printRule("EXPR", "WHILE_EXPR");
                    $$.type = $1.type;
                    $$.numParams = $1.numParams;
                    $$.returnType = $1.returnType;
                }
                | N_FOR_EXPR
                {
                    $$.type = $1.type;
                    $$.numParams = $1.numParams;
                    $$.returnType = $1.returnType;
					$$.param=$1.param;
                    printRule("EXPR", "FOR_EXPR");
                }
                | N_COMPOUND_EXPR
                {
                    printRule("EXPR", "COMPOUND_EXPR");
                    $$.type = $1.type;
                    $$.numParams = $1.numParams;
                    $$.returnType = $1.returnType;                
                }
                | N_ARITHLOGIC_EXPR
                {
                    $$.type = $1.type;
                    $$.numParams = $1.numParams;
                    $$.returnType = $1.returnType;                
                    printRule("EXPR", "ARITHLOGIC_EXPR");
                }
                | N_ASSIGNMENT_EXPR
                {
                    printRule("EXPR", "ASSIGNMENT_EXPR");
                    $$.type = $1.type;
                    $$.numParams = $1.numParams;
                    $$.returnType = $1.returnType;
					$$.param=$1.param;
                }
                | N_OUTPUT_EXPR
                {
                    printRule("EXPR", "OUTPUT_EXPR");
                    $$.type = $1.type;
                    $$.numParams = $1.numParams;
                    $$.returnType = $1.returnType;                
                }
                | N_INPUT_EXPR
                {
                    printRule("EXPR", "INPUT_EXPR");
                    $$.type = $1.type;
                    $$.numParams = $1.numParams;
                    $$.returnType = $1.returnType;               
                }
                | N_LIST_EXPR
                {
                    printRule("EXPR", "LIST_EXPR");
                    $$.type = $1.type;
                    $$.numParams = $1.numParams;
                    $$.returnType = $1.returnType;                
                }
                | N_FUNCTION_DEF
                {
                    printRule("EXPR", "FUNCTION_DEF");
                    $$.type = $1.type;
                    $$.numParams = $1.numParams;
                    $$.returnType = $1.returnType;                
                }
                | N_FUNCTION_CALL
                {
                    printRule("EXPR", "FUNCTION_CALL");
                    $$.type = $1.type;
                    $$.numParams = $1.numParams;
                    $$.returnType = $1.returnType;                
                }
                | N_QUIT_EXPR
                {
                    printRule("EXPR", "QUIT_EXPR");
                    $$.type = $1.type;
                    $$.numParams = $1.numParams;
                    $$.returnType = $1.returnType;                
                    exit(1);
                }
                ;

N_CONST         : T_INTCONST
                {
                    printRule("CONST", "INTCONST");
                    $$.type = INT;
                    $$.numParams = NOT_APPLICABLE;
                    $$.returnType = NOT_APPLICABLE;
                }
                | T_STRCONST
                {
                    $$.type = STR;
                    $$.numParams = NOT_APPLICABLE;
                    $$.returnType = NOT_APPLICABLE;
                    printRule("CONST", "STRCONST");
                }
                | T_FLOATCONST
                {
                    $$.type = FLOAT;
                    $$.numParams = NOT_APPLICABLE;
                    $$.returnType = NOT_APPLICABLE;                
                    printRule("CONST", "FLOATCONST");
                }
                | T_TRUE
                {
                    $$.type = BOOL;
                    $$.numParams = NOT_APPLICABLE;
                    $$.returnType = NOT_APPLICABLE;                
                    printRule("CONST", "TRUE");
                }
                | T_FALSE
                {
                    $$.type = BOOL;
                    $$.numParams = NOT_APPLICABLE;
                    $$.returnType = NOT_APPLICABLE;                
                    printRule("CONST", "FALSE");
                }
                ;

N_ARITHLOGIC_EXPR : N_SIMPLE_ARITHLOGIC
                {
                    printRule("ARITHLOGIC_EXPR", 
                              "SIMPLE_ARITHLOGIC");
                    $$.type = $1.type;
                    $$.numParams = NOT_APPLICABLE;
                    $$.returnType = NOT_APPLICABLE;
                }
                | N_SIMPLE_ARITHLOGIC N_REL_OP
                  N_SIMPLE_ARITHLOGIC
                {
                    if(isInvalidOperandType($1.type))
                    {
                        yyerror("Arg 1 must be integer or float or bool");
                    }
                    if(isInvalidOperandType($3.type))
                    {
                        yyerror("Arg 2 must be integer or float or bool");
                    }
                    $$.type = BOOL;
                    $$.numParams = NOT_APPLICABLE;
                    $$.returnType = NOT_APPLICABLE;
                    printRule("ARITHLOGIC_EXPR", 
                              "SIMPLE_ARITHLOGIC REL_OP "
                              "SIMPLE_ARITHLOGIC");
                }
                ;

N_SIMPLE_ARITHLOGIC : N_TERM N_ADD_OP_LIST
                {
                    printRule("SIMPLE_ARITHLOGIC", 
                              "TERM ADD_OP_LIST");
                    if($2.type == NOT_APPLICABLE){
                        $$.type = $1.type;                       
                    }else{
                        if(isInvalidOperandType($1.type))
                        {
                            yyerror("Arg 1 must be integer or float or bool");
                        }
                        if($1.type == FLOAT || $2.type == FLOAT){
                            $$.type = FLOAT;                       
                        }else{
                            $$.type = $2.type;                       
                        }                       
                    }    
                    $$.numParams = NOT_APPLICABLE;
                    $$.returnType = NOT_APPLICABLE;                              
                }
                ;

N_ADD_OP_LIST	: N_ADD_OP N_TERM N_ADD_OP_LIST
                {
                    printRule("ADD_OP_LIST", 
                              "ADD_OP TERM ADD_OP_LIST");
                    if(isInvalidOperandType($2.type))
                    {
                        yyerror("Arg 2 must be integer or float or bool");
                    }
                    if($1.type == LOGICAL){
                        $$.type = BOOL;
                        $$.numParams = NOT_APPLICABLE;
                        $$.returnType = NOT_APPLICABLE;                        
                    }else{
                        if($2.type == FLOAT || $3.type == FLOAT){
                            $$.type = FLOAT;                       
                        }else{
                            $$.type = INT;                       
                        }   
                        $$.numParams = NOT_APPLICABLE;
                        $$.returnType = NOT_APPLICABLE;
                    }                    
                }
                | /* epsilon */
                {
                    printRule("ADD_OP_LIST", "epsilon");
                    $$.type = NOT_APPLICABLE;
                    $$.numParams = NOT_APPLICABLE;
                    $$.returnType = NOT_APPLICABLE;
                }
                ;

N_TERM		: N_FACTOR N_MULT_OP_LIST
                {
                    printRule("TERM", 
                              "FACTOR MULT_OP_LIST");

                    if($2.type == NOT_APPLICABLE){
                        $$.type = $1.type;                       
                    }else{
                        if(isInvalidOperandType($1.type))
                        {
                            yyerror("Arg 1 must be integer or float or bool");
                        }
                        if($1.type == FLOAT || $2.type == FLOAT){
                            $$.type = FLOAT;                       
                        }else{
                            $$.type = INT;                       
                        }   
                    }   
                    $$.numParams = NOT_APPLICABLE;
                    $$.returnType = NOT_APPLICABLE;                   
                }
                ;

N_MULT_OP_LIST	: N_MULT_OP N_FACTOR N_MULT_OP_LIST
                {
                    printRule("MULT_OP_LIST", 
                              "MULT_OP FACTOR MULT_OP_LIST");
                    if(isInvalidOperandType($2.type))
                    {
                        yyerror("Arg 2 must be integer or float or bool");
                    }
                    if($2.type == FLOAT || $3.type == FLOAT){
                        $$.type = FLOAT;                       
                    }else{
                        $$.type = INT;                       
                    }   
                    $$.numParams = NOT_APPLICABLE;
                    $$.returnType = NOT_APPLICABLE;                     
                }
                | /* epsilon */
                {
                    printRule("MULT_OP_LIST", "epsilon");
                    $$.type = NOT_APPLICABLE;
                    $$.numParams = NOT_APPLICABLE;
                    $$.returnType = NOT_APPLICABLE;
                    }
                ;

N_FACTOR		: N_VAR
                {
                    printRule("FACTOR", "VAR");
                    $$.type = $1.type;
                    $$.numParams = $1.numParams;
                    $$.returnType = $1.numParams;
                    }
                | N_CONST
                {
                    printRule("FACTOR", "CONST");
                    $$.type = $1.type;
                    $$.numParams = $1.numParams;
                    $$.returnType = $1.numParams;
                    }
                | T_LPAREN N_EXPR T_RPAREN
                {
                    printRule("FACTOR", "( EXPR )");
                    $$.type = $2.type;
                    $$.numParams = $2.numParams;
                    $$.returnType = $2.numParams;
                    }
                | T_NOT N_FACTOR
                {
                    printRule("FACTOR", "! FACTOR");
                    $$.type = $2.type;
                    $$.numParams = $2.numParams;
                    $$.returnType = $2.numParams;
                    }
                ;

N_COMPOUND_EXPR : T_LBRACE N_EXPR N_EXPR_LIST T_RBRACE
                {
                    printRule("COMPOUND_EXPR",
                              "{ EXPR EXPR_LIST }");
                    $$.type = $2.type;
                    $$.numParams = $2.numParams;
                    if($3.type==NOT_APPLICABLE){
                        $$.type = $2.type;
                        $$.numParams = $2.numParams;
                        $$.returnType = $2.returnType;
                        }
                    else{
                        $$.type = $3.type;
                        $$.numParams = $3.numParams;
                        $$.returnType = $3.returnType;
                        }
                }
                ;

N_EXPR_LIST     : T_SEMICOLON N_EXPR N_EXPR_LIST
                {
                    printRule("EXPR_LIST", "; EXPR EXPR_LIST");
                    $$.type = $2.type;
                    $$.numParams = $2.numParams;
                    $$.returnType = $2.returnType;                   
                }
                | /* epsilon */
                {
                    printRule("EXPR_LIST", "epsilon");
                }
                ;

N_IF_EXPR       : N_COND_IF T_RPAREN N_THEN_EXPR 
                {
                    if(($3.type == FUNCTION)){
                        yyerror("Arg 2 cannot be function");
                    }   
					printRule("IF_EXPR", "COND_IF ) THEN_EXPR");
                }
                | N_COND_IF T_RPAREN N_THEN_EXPR T_ELSE N_EXPR
                {
                    if(($3.type == FUNCTION)){
                        yyerror("Arg 2 cannot be function");
                    }   
                    if(($5.type == FUNCTION)){
                        yyerror("Arg 3 cannot be function");
                    }   
                    printRule("IF_EXPR", 
                              "COND_IF ) THEN_EXPR ELSE EXPR");
                }
                ;
                
N_COND_IF       : T_IF T_LPAREN N_EXPR
                {
                    if(($3.type == FUNCTION) || ($3.type == STR) || ($3.type == NULL_TYPE) || ($3.type == LIST)){
                        yyerror("Arg 1 cannot be function or null or list or string");
                    }    
                    printRule("COND_IF","IF ) EXPR");
                }
                ;

N_THEN_EXPR     : N_EXPR
                {
                    printRule("THEN_EXPR","EXPR");
                };

N_WHILE_EXPR    : T_WHILE T_LPAREN N_EXPR
                {
                    printRule("WHILE_EXPR", 
                              "WHILE ( EXPR ) "
                              "LOOP_EXPR");
                    if(($3.type == FUNCTION) || ($3.type == STR) || ($3.type == NULL_TYPE) || ($3.type == LIST)){
                        yyerror("Arg 1 cannot be function or null or list or string");
                    }                
                }
                T_RPAREN N_EXPR
                {
                    /*
                    if(($6.type == FUNCTION) || ($6.type == STR) || ($6.type == NULL_TYPE) || ($6.type == LIST)){
                        yyerror("Arg 2 cannot be function or null or list or string");
                    } 
                    */
                    $$.type = $6.type;
                    $$.numParams = $6.numParams;
                    $$.returnType = $6.returnType;                      
                }
                ;


N_FOR_EXPR      : T_FOR T_LPAREN T_IDENT T_IN N_EXPR T_RPAREN 
                {
                    if((scopeStack.top().findEntry(string($3)).type == FUNCTION)||(scopeStack.top().findEntry(string($3)).type == NULL_TYPE)||(scopeStack.top().findEntry(string($3)).type == LIST))
                        yyerror("Arg 1 cannot be function or null or list");
                    if($5.type != LIST)
                        yyerror("Arg 2 must be list");
                     
                    if(scopeStack.top().findEntry(string($3)).type == NOT_APPLICABLE)
					{
                        string lexeme = string($3);
                        if(assignment_statement){
                            //printf("___Adding %s to symbol table\n", $3);
                        }
                        TYPE_INFO typeinfo = {INT_OR_STR_OR_FLOAT_OR_BOOL, NOT_APPLICABLE, NOT_APPLICABLE,false};
                        bool success = scopeStack.top().addEntry(
                            SYMBOL_TABLE_ENTRY(lexeme, typeinfo));
							}
                    /*
					else{
                        if(isInvalidOperandType($3.type))
                            yyerror("Arg 3 must be integer or string or float or bool"); 
					}
					*/
                    
                    
                }
				N_EXPR
				{
					$$.type = $8.type;
                    $$.numParams = NOT_APPLICABLE;
                    $$.returnType = NOT_APPLICABLE;  
					printRule("FOR_EXPR", 
                              "FOR ( IDENT IN EXPR ) EXPR");
				}
                ;


N_LIST_EXPR     : T_LIST T_LPAREN N_CONST_LIST T_RPAREN
                {
                    printRule("LIST_EXPR", 
                              "LIST ( CONST_LIST )");
                    $$.type = LIST;
                    $$.numParams = NOT_APPLICABLE;
                    $$.returnType = NOT_APPLICABLE;                               
                }
                ;

N_CONST_LIST    : N_CONST T_COMMA N_CONST_LIST
                {
                    printRule("CONST_LIST", 
                              "CONST, CONST_LIST");
                }
                | N_CONST
                {
                    printRule("CONST_LIST", "CONST");
                }
                ;

N_ASSIGNMENT_EXPR : T_IDENT N_INDEX
                {
                    
                    if((scopeStack.top().findEntry(string($1)).type!=INT)&&(scopeStack.top().findEntry(string($1)).type!=NOT_APPLICABLE))
						yyerror("Arg 1 must be integer");
                    if($2.type != NULL_TYPE && $2.type == LIST)
                        yyerror("Arg 2 cannot be list");
                    printRule("ASSIGNMENT_EXPR", 
                              "IDENT INDEX ASSIGN EXPR");
                    string lexeme = string($1);
                    TYPE_INFO exprTypeInfo =
                        scopeStack.top().findEntry(lexeme);
                    if(exprTypeInfo.type == UNDEFINED) 
					{
                      //if(scopeStack.top().findEntry(string($1)).type==NOT_APPLICABLE)
                      
                      scopeStack.top().addEntry(SYMBOL_TABLE_ENTRY(lexeme,{NOT_APPLICABLE, NOT_APPLICABLE,NOT_APPLICABLE,false}));
               
						pdf = false;
					}
                    else 
					{ 
						pdf = true;
                    }
                    
                }
                T_ASSIGN N_EXPR
                {
                    
                    string lexeme = string($1);
                    TYPE_INFO exprTypeInfo = scopeStack.top().findEntry(lexeme);
						if(exprTypeInfo.type == UNDEFINED) 
					{
                      //if(scopeStack.top().findEntry(string($5)).type==NOT_APPLICABLE)
                      
                      scopeStack.top().addEntry(SYMBOL_TABLE_ENTRY(lexeme,{$5.type, $5.numParams,$5.returnType,$5.param}));
               
						
					}
						
						else if(((exprTypeInfo.param)==true)&&isIntCompatible(lexeme)==false&&(pdf==true))
						{
						yyerror("Arg 1 must be integer");
						}
						else if((exprTypeInfo.param==true)&&(isIntCompatible($5.type)==true))
						{
						yyerror("Arg 1 must be integer");
						}
						
						
                    cout<<exprTypeInfo.param<<"isparam"<<endl;
						cout<<isIntCompatible($5.type)<<"intcompatible"<<endl;
						cout<<pdf<<"pdf"<<endl;
                    scopeStack.top().changeEntry(SYMBOL_TABLE_ENTRY(lexeme,{$5.type, $5.numParams,$5.returnType}));
			    if (($2.type==LIST) &&(exprTypeInfo.type != LIST))
					yyerror("Arg 1 must be list");
				if (($2.type==LIST) &&($5.type == LIST))
					yyerror("Arg 1 cannot be list");
                $$.type = $5.type;
                $$.numParams = $5.numParams;
                $$.returnType = $5.returnType; 
				$$.param=$5.param;
                }
                ;


N_INDEX :       T_LBRACKET T_LBRACKET N_EXPR T_RBRACKET
                T_RBRACKET
			    {
                    printRule("INDEX", " [[ EXPR ]]");
                    $$.type = $3.type;
                    $$.numParams = $3.numParams;
                    $$.returnType = $3.returnType;			    
                }
			    | /* epsilon */
                {
                    $$.type = NULL_TYPE;
                    $$.numParams = NOT_APPLICABLE;
                    $$.returnType = NOT_APPLICABLE;
                    printRule("INDEX", " epsilon");
                }
                ;

N_QUIT_EXPR     : T_QUIT T_LPAREN T_RPAREN
                {
                    printRule("QUIT_EXPR", "QUIT()");
                    $$.type = NULL_TYPE;
                    $$.numParams = NOT_APPLICABLE;
                    $$.returnType = NOT_APPLICABLE;                       
                }
                ;

N_OUTPUT_EXPR   : T_PRINT T_LPAREN N_EXPR T_RPAREN
                {
                    printRule("OUTPUT_EXPR", 
                              "PRINT ( EXPR )");
                    if($3.type == FUNCTION || $3.type == NULL_TYPE)
                    {
                        yyerror("Arg 1 cannot be function or null");
                    }
                    $$.type = $3.type;
                    $$.numParams = $3.numParams;
                    $$.returnType = $3.returnType;                      
                              
                }
                | T_CAT T_LPAREN N_EXPR T_RPAREN
                {
                    printRule("OUTPUT_EXPR", 
                              "CAT ( EXPR )");
                    if($3.type == NULL_TYPE || $3.type == FUNCTION){
                        yyerror("Arg 1 cannot be function or null");
                    }
                    $$.type = NULL_TYPE;
                    $$.numParams = NOT_APPLICABLE;
                    $$.returnType = NOT_APPLICABLE;                                
                }
                ;

N_INPUT_EXPR    : T_READ T_LPAREN T_RPAREN
                {
                    printRule("INPUT_EXPR", "READ ( )");
					
                    $$.type = INT_OR_STR_OR_FLOAT;
					$$.numParams = NOT_APPLICABLE;
					$$.returnType = NOT_APPLICABLE;
                }
                ;

N_FUNCTION_DEF  : T_FUNCTION
                {
                    beginScope();
                }
                T_LPAREN N_PARAM_LIST 
				{
				x=scopeStack.top().getSize();
				}
				T_RPAREN N_COMPOUND_EXPR
                {
                    
					if($7.type == FUNCTION)
                            yyerror("Arg 2 cannot be function"); 
                    
                    printRule("FUNCTION_DEF",
                              "FUNCTION ( PARAM_LIST )"
                              " COMPOUND_EXPR");
                    $$.type = FUNCTION;
                    $$.numParams = x;
                    $$.returnType = $7.returnType; 
                    endScope();
                }
                ;

N_PARAM_LIST    : N_PARAMS
                {
                    printRule("PARAM_LIST", "PARAMS");
                }
                | N_NO_PARAMS
                {
                    printRule("PARAM_LIST", "NO PARAMS");
                }
                ;

N_NO_PARAMS     : /* epsilon */
                {
                    printRule("NO_PARAMS", "epsilon");
                }
                ;

N_PARAMS        : T_IDENT
                {
                    printRule("PARAMS", "IDENT");
                    string lexeme = string($1);
                   
                    // assuming params are ints
					//cout<<lexeme.param<<" before"<<endl;
                    TYPE_INFO exprTypeInfo = 
                     {INT, NOT_APPLICABLE, NOT_APPLICABLE,true};
                    bool success = 
                     scopeStack.top().
                      addEntry(SYMBOL_TABLE_ENTRY
                        (lexeme, exprTypeInfo));
                    if(!success) 
                    yyerror("Multiply defined identifier");
					//cout<<lexeme.param<<" after"<<endl;
                }
                | T_IDENT T_COMMA N_PARAMS
                {
                    printRule("PARAMS", "IDENT, PARAMS");
                    string lexeme = string($1);
                    //cout<<lexeme.param<<" before"<<endl;
                    // assuming params are ints 
                    TYPE_INFO exprTypeInfo = 
                     {INT, NOT_APPLICABLE, NOT_APPLICABLE,true};
                    bool success =
                     scopeStack.top().addEntry(
                      SYMBOL_TABLE_ENTRY(lexeme, exprTypeInfo));
                    if(!success) 
				yyerror("Multiply defined identifier");
				//cout<<lexeme.param<<" after"<<endl;
                }
                ;
                

N_FUNCTION_CALL : T_IDENT T_LPAREN N_ARG_LIST T_RPAREN
                {
                    string lexeme = string($1);
					/*
					if (findEntryInAnyScope($1).type == NOT_APPLICABLE) {
                        yyerror("Undefined identifier");
                        return(0);
					*/
					TYPE_INFO temp=scopeStack.top().findEntry(lexeme);
					if(scopeStack.top().findEntry(string($1)).type != FUNCTION)
                            yyerror("Arg 2 must be function");
					//cout<<$3.numParams<<endl;
					//cout<<temp.numParams<<endl;
					if($3.numParams>temp.numParams)
						yyerror("Too many parameters in function call");
					if($3.numParams<temp.numParams)
						yyerror("Too few parameters in function call");
                    printRule("FUNCTION_CALL", "IDENT"
                              " ( ARG_LIST )");
					
					
                    
                    
					
                    
                }
                ;

N_ARG_LIST      : N_ARGS
                {
                    printRule("ARG_LIST", "ARGS");
					$$.numParams=$1.numParams+1;
					
					
					
					
                }
                | N_NO_ARGS
                {
                    printRule("ARG_LIST", "NO_ARGS");
					$$.numParams = 0;
                }
                ;

N_NO_ARGS       : /* epsilon */
                {
                    printRule("NO_ARGS", "epsilon");
                }
                ;

N_ARGS          : N_EXPR
                {
                    
					if(!isIntCompatible($1.type))
					{
                        yyerror("Function parameters must be integer");
                    } 
					$$.numParams=$$.numParams+1;
					
                    printRule("ARGS", "EXPR");
                }
                | N_EXPR 
				{
					if(!isIntCompatible($1.type))
					{
                        yyerror("Function parameters must be integer");
                    } 
				}
				
				T_COMMA N_ARGS
                {
                    if(!isIntCompatible($1.type))
                        yyerror("Function parameters must be integer");
					$$.numParams = 1+$4.numParams;
                    printRule("ARGS", "EXPR, ARGS");
                }
                ;

N_ADD_OP	     : T_ADD
                {
                    printRule("ADD_OP", "+");
                    $$.type = ARITHMETIC;
                    $$.numParams = NOT_APPLICABLE;
                    $$.returnType = NOT_APPLICABLE;
                }
                | T_SUB
                {
                    printRule("ADD_OP", "-");
                    $$.type = ARITHMETIC;
                    $$.numParams = NOT_APPLICABLE;
                    $$.returnType = NOT_APPLICABLE;
                    }
                | T_OR
                {
                    printRule("ADD_OP", "|");
                    $$.type = LOGICAL;
                    $$.numParams = NOT_APPLICABLE;
                    $$.returnType = NOT_APPLICABLE;
                    }
                ;

N_MULT_OP      : T_MULT
                {
                    printRule("MULT_OP", "*");
                    $$.type = ARITHMETIC;
                    $$.numParams = NOT_APPLICABLE;
                    $$.returnType = NOT_APPLICABLE;
                }
                | T_DIV
                {
                    printRule("MULT_OP", "/");
                    $$.type = ARITHMETIC;
                    $$.numParams = NOT_APPLICABLE;
                    $$.returnType = NOT_APPLICABLE;
                }
                | T_AND
                {
                    printRule("MULT_OP", "&");
                    $$.type = LOGICAL;
                    $$.numParams = NOT_APPLICABLE;
                    $$.returnType = NOT_APPLICABLE;
                }
                | T_MOD
                {
                    printRule("MULT_OP", "\%\%");
                    $$.type = ARITHMETIC;
                    $$.numParams = NOT_APPLICABLE;
                    $$.returnType = NOT_APPLICABLE;
                }
                | T_POW
                {
                    printRule("MULT_OP", "^");
                    $$.type = ARITHMETIC;
                    $$.numParams = NOT_APPLICABLE;
                    $$.returnType = NOT_APPLICABLE;                
                }
                ;

N_REL_OP        : T_LT
                {
                    printRule("REL_OP", "<");
                }
                | T_GT
                {
                    printRule("REL_OP", ">");
                }
                | T_LE
                {
                    printRule("REL_OP", "<=");
                }
                | T_GE
                {
                    printRule("REL_OP", ">=");
                }
                | T_EQ
                {
                    printRule("REL_OP", "==");
                }
                | T_NE
                {
                    printRule("REL_OP", "!=");
                }
                ;

N_VAR           : N_ENTIRE_VAR
                {
                    printRule("VAR", "ENTIRE_VAR");
                    $$.type = $1.type;
                    $$.numParams = $1.numParams;
                    $$.returnType = $1.returnType;                     
                }
                | N_SINGLE_ELEMENT
                {
                    printRule("VAR", "SINGLE_ELEMENT");
                    $$.type = $1.type;
                    $$.numParams = $1.numParams;
                    $$.returnType = $1.returnType;  
                    }
                ;

N_SINGLE_ELEMENT : T_IDENT T_LBRACKET T_LBRACKET N_EXPR
                   T_RBRACKET T_RBRACKET
                {
                    printRule("SINGLE_ELEMENT", "IDENT"
                              " [[ EXPR ]]");
                    if (findEntryInAnyScope($1).type == NOT_APPLICABLE) {
                        yyerror("Undefined identifier");
                        return(0);
                    }
                    /*
                    if(scopeStack.top().findEntry(string($1)).type != LIST)
                        yyerror("Arg 1 must be list");
                        */
                    $$.type = INT_OR_STR_OR_FLOAT_OR_BOOL;
                    $$.numParams = NOT_APPLICABLE;
                    $$.returnType = NOT_APPLICABLE;                  
                }
                ;

N_ENTIRE_VAR    : T_IDENT
                {
                    printRule("ENTIRE_VAR", "IDENT");
                    if(findEntryInAnyScope($1).type == NOT_APPLICABLE)
                    {
                        yyerror("Undefined identifier");
                        return(0);
                    }
                    $$.type = findEntryInAnyScope($1).type;
                    $$.numParams = findEntryInAnyScope($1).numParams;
                    $$.returnType = findEntryInAnyScope($1).returnType; 
                }
                ;

%%

#include "lex.yy.c"
extern FILE *yyin;

void printTokenInfo(const char* token_type, const char* lexeme)
{
    if(assignment_statement)
        printf("TOKEN: %s \t\t LEXEME: %s\n", token_type, lexeme);
}

void printRule(const char *lhs, const char *rhs)
{
    if(assignment_statement)
        printf("%s -> %s\n", lhs, rhs);
    return;
}

void beginScope() {
    scopeStack.push(SYMBOL_TABLE());
    if(assignment_statement)
        printf("\n___Entering new scope...\n\n");
}

void endScope() {
    scopeStack.pop();
    if(assignment_statement)
        printf("\n___Exiting scope...\n\n");
}

void cleanUp() {
    if (scopeStack.empty())
        return;
    else {
        scopeStack.pop();
        cleanUp();
    }
}

TYPE_INFO findEntryInAnyScope(const string the_name) {
    TYPE_INFO defaultType;
    if (scopeStack.empty())
    {    
        defaultType = {NOT_APPLICABLE, NOT_APPLICABLE, NOT_APPLICABLE};
        return(defaultType);
    }
    TYPE_INFO found = scopeStack.top().findEntry(the_name);
    if (found.type != NOT_APPLICABLE)
        return(found);
    else {
        SYMBOL_TABLE symbolTable = scopeStack.top();
        scopeStack.pop();
        found = findEntryInAnyScope(the_name);
        scopeStack.push(symbolTable); // restore stack to original state
        return(found);
    }
}

bool isIntOrFloatOrBoolCompatible(const int theType)
{
    return((theType == INT) || (theType == FLOAT) ||
		 (theType == BOOL) ||
           (theType == INT_OR_STR_OR_FLOAT_OR_BOOL));
}

// Determine whether given type is compatible with INT.
bool isIntCompatible(const int theType)
{
    return((theType == INT) ||
		(theType == BOOL) ||
           (theType == INT_OR_STR_OR_FLOAT_OR_BOOL));
}

// Determine whether given type is compatible with BOOL.
bool isBoolCompatible(const int theType)
{
    return((theType == BOOL) ||
           (theType == INT_OR_STR_OR_FLOAT_OR_BOOL));
}

// Determine whether given type is compatible with FLOAT.
bool isFloatCompatible(const int theType)
{
    return((theType == FLOAT) ||
           (theType == INT_OR_STR_OR_FLOAT_OR_BOOL));
}

bool isInvalidOperandType(const int theType)
{
    return((theType == FUNCTION) ||
           (theType == NULL_TYPE) ||
		(theType == LIST) ||
           (theType == STR));
}
int main() 
{
    beginScope();
    do {
        yyparse();
    } while (!feof(yyin));

    cleanUp();

    return 0;
}
