#include<stdio.h>

int main()
{
	int a;
	printf("Enter the number in the binary form\n");
	scanf("%d",&a);
	while(a>=1)
	{
	printf("%d",a%2);
	a = a/2;
	}
	return 0;
}

