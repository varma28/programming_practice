#include<stdio.h>

int main()
{
	int a;
	printf("Enter the number\n");
	scanf("%d",&a);
	if(a&0x1)
		printf("The number is odd\n");
	else
		printf("The number is even\n");
	return 0;
}
