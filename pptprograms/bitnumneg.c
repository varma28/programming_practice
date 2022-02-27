#include<stdio.h>

int main()
{
	int a;
	printf("Enter the number\n");
	scanf("%d",&a);
	if(a>>31&0x1)
		printf("Number is negative\n");
	else
		printf("Number is positive\n");
	return 0;

}
