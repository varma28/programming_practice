#include<stdio.h>

void bubble(int * array ,int size)
{
	int i = 0,j = 0,temp=0;
	for(i = 0; i < size-1; i++)
	{
		for(j = 0 ; j<size-i-1 ; j++)
		{
			printf("i = %d\tj = %d\n",i,j);
			if(array[j]>array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
		
	}
for(j=0;j<size;j++)
	printf("%d ",array[j]);

}

int main()
{
	int array[10] = {19,1,23,-45,78,0,12,34,99,10};
	for(int i = 0;i<10;i++)
		printf("%d\n",array[i]);
	printf("------------------------------------\n");
	bubble(array,10);
//	for(int i = 0;i<10;i++)
//		printf("%d\n",array[i]);
	return 0;
}






