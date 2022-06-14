#include<stdio.h>
#include<stdlib.h>
struct student
{
int a;
struct student * prev;
struct student *next;
};

typedef struct student node;


