#include<stdio.h>

void sortfun1(int * arr,int num)
{
	int i = 0,j = 0,min_index,temp;
	for(;i<num-1;i++)
	{
		min_index = i;
		j = i+1;
		for(;j<num;j++)
		{
			if(arr[j]<arr[min_index])
				min_index = j;
		}
		temp = arr[min_index];
		arr[min_index] = arr[i];
		arr[i] = temp;
	}
}
int main()
{
	int arr[20] = {2,65,-34,-225,225,2,98,34,-78,65,1,12,13,67,-1,0,17,90,21,67};
	for(int i =0;i<20;i++)
		printf("%d\n",arr[i]);

	sortfun1(arr,20);

	for(int i =0;i<20;i++)
		printf("%d\n",arr[i]);

	return 0;
}



