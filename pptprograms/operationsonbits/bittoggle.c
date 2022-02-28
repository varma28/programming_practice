#include<stdio.h>

#define bittogle(x,y) x^(0x1<<y)

int main()
{
	int a,b;
	printf("Enter the number\n");
 	scanf("%d",&a);
	printf("Enter the bit to be toggled\n");
	scanf("%d",&b);
	printf("The number after toggling the bit is %d\n",bittogle(a,b));
	return 0;	
}
