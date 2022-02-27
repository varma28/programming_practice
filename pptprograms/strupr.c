#include<stdio.h>

int main()
	{
		int i,j;

		char str[10];

		printf("Enter the string\n");
		
		scanf("%s",str);

		for(i=0;str[i];i++)
		{
			if(str[i]>=97&&str[i]<=122)
				str[i] -= 32;
		}

		printf("%s",str);

		return 0;
	}

		




