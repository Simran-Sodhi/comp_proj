/*
GROUP NUMBER: 39
Garlapati Sujith Reddy 2019A7PS0125P
Prabhanshu Singh Sikarwar 2019A7PS0130P
Niharika Gupta 2018B1A70657P
Devaansh Shrivastava 2019A7PS0114P
Simran Sodhi 2018B1A70896P
*/

#include <stdio.h>
#include <stdlib.h>

#include "lexerDef.h"
#ifndef LEXERH_INCLUDED
#define LEXERH_INCLUDED

FILE *getStream(FILE* fp,char* buffer,int bsize);

tokenInfo getNextToken(FILE *fp, char* buffer,int bsize);

void createLexerHashTable();
long long hashFunc(char* string);
int lookup(char* lexeme);

void removeComments(FILE* testfile,FILE* cleanfile);

#endif