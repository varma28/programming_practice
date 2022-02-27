#include<stdio.h>

#define myownsizeof(x)   (char *) (&x + 1) - (char *) (&x)

int main()
{
	int a;
	printf("Enter any integer number\n");
	scanf("%d",&a);
	printf("The size of the integer in the system is %ld\n",myownsizeof(a));
	return 0;
}

