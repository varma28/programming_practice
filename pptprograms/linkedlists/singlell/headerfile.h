#include<stdio.h>

#include<string.h>

#include<stdlib.h>

typedef struct student 
	{
		int rollno;
		char gender,name[10];
		struct student *next;
	}std;

std * create();

void traverse(std *);

std * locate(std *,int );

std * del(std *);

std * insert(std *);

std * reverse(std *);


