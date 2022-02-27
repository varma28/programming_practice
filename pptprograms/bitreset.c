#include<stdio.h>

#define bitreset(x,y)  x & ~(0x1<<y)

int main()
{
	int a,b;
	printf("Enter the number\n");
	scanf("%d",&a);
	printf("Enter the bit position\n");
	scanf("%d",&b);
	printf("After reseting the bit position the number is %d\n",bitreset(a,b));
	return 0;
}
	
