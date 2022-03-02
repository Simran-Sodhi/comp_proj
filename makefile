
#GROUP NUMBER: 39
#Garlapati Sujith Reddy 2019A7PS0125P
#Prabhanshu Singh Sikarwar 2019A7PS0130P
#Niharika Gupta 2018B1A70657P
#Devaansh Shrivastava 2019A7PS0114P
#Simran Sodhi 2018B1A70896P

CC=gcc

stage1exe: driver.c parser.c lexer.c 
	gcc -o stage1exe -g driver.c parser.c lexer.c 