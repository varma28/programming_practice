#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter number a : \n");
	scanf("%d",&a);
	printf("Enter number b : \n");
	scanf("%d",&b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("The numbers after swapping their values is a = %d\tb = %d\n ",a,b);
	return 0;
}
