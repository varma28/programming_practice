#include<stdio.h>

#define bittogle(x,y) x^(0x1<<y) 

int main()
{
	int n,i=0,j=31;
	printf("Enter the number\n");
	scanf("%d",&n);
	for(i,j;i<j;i++,j--)
	{
		if((n&(0x1<<i))!=(n&(0x1>>j)))
		{
			n = bittogle(n,i);
			n = bittogle(n,j);
		}
	}
	printf("The number after reversing the bits is %d\n",n);
	return 0;
}

