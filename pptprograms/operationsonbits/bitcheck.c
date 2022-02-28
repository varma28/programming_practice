#include<stdio.h>

#define Bitcheck(x,y) x&(0x1<<y)

int main()
{
	int a,b;
	printf("Enter the number\n");
	scanf("%d",&a);
	printf("Enter the position to be checked\n");
	scanf("%d",&b);
	if(Bitcheck(a,b))
		printf("The bit is set \n");
	else
		printf("The bit is not set\n");
	return 0;
}

