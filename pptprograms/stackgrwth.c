#include<stdio.h>

int main()
{
	int arr[2]={0,1};

	if((&arr[0])-(&arr[1])>0)
		printf("The stack is growing down\n%u\t%u\n",&arr[0],&arr[1]);
	else
		printf("The stack is growing up\n%u\t%u\n",&arr[0],&arr[1]);
	return 0;
}
