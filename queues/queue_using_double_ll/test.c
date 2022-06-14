#include<stdio.h>
#include<stdlib.h>

struct student
{
	int a;
	struct student *next ;
};

typedef struct student node;

int main()
{
	node s1,*s2,**s3;
	s1.a = 21;

	s2 = &s1 ;

	s3 = &s2;

	printf("%d\n%d\n",s2->a,(*s3)->a);
	return 0;
}



