#include<stdio.h>

int chckpow2(int num)
{
	if((num&(num-1)) ==0 && num != 1)
		return 1;
	else
		return 0;
}

int checkpow(int numbr)
{
	int c = 0;
	while((numbr&0x1) == 0)
	{
		c++;
		numbr = numbr>>1 ;
	}

	if(c%2 == 0)
		return 1;
	else
		return 0;

}

int main()
{
	int a;
	printf("Enter the number\n");
	scanf("%d",&a);
	if(chckpow2(a))
	{
		if(checkpow(a))
			printf("The number is a power of 4\n");
		else
			printf("The number is not a power of 4\n");
	}
	else
		printf("The number is not a power of 4\n");
	return 0;
}

