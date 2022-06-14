#include<stdio.h>

#include<string.h>

#include<stdlib.h>

struct student
   {
           int a;
           struct student *next;
	   struct student *prev;
   };

typedef struct student node;

void  inbefore_pos(int pos,node *dummmy);

node *create_node(void);

void traverse(node *);

node *enqueue(node *);

node *deque(node *);

