#include <stdio.h>

int addOne(int x)
{
	int m = 1;
	
	// Flip all the set bits
	// until we find a 0
	while( x & m )
	{
		x = x ^ m;
		m <<= 1;
	}
	
	// flip the rightmost 0 bit
	x = x ^ m;
	return x;
}

int main()
{
	int a;
	printf("Enter the number\n");
	scanf("%d",&a);
	printf("The number after adding one is : %d\n", addOne(a));
	return 0;
}




/*#include<stdio.h>

int main()
{
	int a;
	printf("Enter the number \n");
	scanf("%d",&a);
	a = a-(~a);
	printf("The number after adding 1 is %d\n",a);
	return 0;
}*/
