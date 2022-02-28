#include<stdio.h>

int main()
	{
		int a=1;
		if((char ) a & 0x1 )
			printf("The system is little edian\n");
		else 
			printf("The system is big edian\n");
		return 0;
	}

