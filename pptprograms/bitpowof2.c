#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number to check weather it's a power os 2 or not\n");
	scanf("%d",&a);
	if((a&(a-1)) == 0 && ( a != 1))
		printf("The number is power of 2\n");
	else
		printf("The number is not a power of 2\n");
	return 0;
}
