
#include<stdio.h>

int main()
{
	int i;
	char str[10],c;

	printf("Enter the string\n");
	scanf("%s",str);
	printf("Enter the character\n");
	scanf(" %c",&c);

	for(i=0;str[i];i++)
	{
		if(str[i]==c)
		{
			printf("The index of first occurance of character in the given string is %d\n",i);
			break;
		}
	}
	return 0;
}
