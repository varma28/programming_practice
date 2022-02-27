#include<stdio.h>

#define bittrns(x) x = (x & (0xf0))>>4 | (x & (0x0f))<<4

int main()
{
	int a;
	printf("Enter the number\n");
	scanf("%d",&a);
	printf("The result after shifting is %d\n",bittrns(a));
	return 0;
}

