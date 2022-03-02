/*
GROUP NUMBER: 39
Garlapati Sujith Reddy 2019A7PS0125P
Prabhanshu Singh Sikarwar 2019A7PS0130P
Niharika Gupta 2018B1A70657P
Devaansh Shrivastava 2019A7PS0114P
Simran Sodhi 2018B1A70896P
*/

#ifndef LEXERDEF_INCLUDED
#define LEXERDEF_INCLUDED

#include <stdlib.h>

typedef struct{
	char* keyword;
	int tokenId;
} hashTableEntry;


typedef struct{
	int tokenId;
	char* value;
	int line;
}tokenInfo;



int state;
int offset;
int lexicalerror;
int lineNo;

#endif 