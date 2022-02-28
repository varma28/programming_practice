#include<stdio.h>

int main()
{
	int a,i=31;
	printf("Enter a number\n");
	scanf("%d",&a);
	printf("The decimal to binary conversion is \n");
	while(i>=0)
	{
		if((a&(0x1<<i)))
			printf("%d",1);
		else
			printf("%d",0);
		i--;
	}
	printf("\n");
	return 0;
}
