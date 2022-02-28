#include<stdio.h>

int main()
{
	int i,j;
	char str[10],c;
	printf("Enter the string \n");
	scanf("%s",str);
	printf("Enter the character \n");
	scanf(" %c",&c);

	for(j=0;str[j];j++);
	j--;

	for(;j>=0;j--)
	{
		if(str[j]==c)
		{
			printf("The last occurance of character is %d\n",j);
			break;
		}
	}
	return 0;

}
