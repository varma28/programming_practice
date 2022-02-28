#include<stdio.h>

int main()
{
	int i=0,j=0
		;
	char str[10],c;

	printf("Enter the string\n");

	scanf("%s",str);

	for(i=0;str[i];i++);
	
	printf("The length of string is %d\n",i);
	i--;

	for(j=0;j<i;j++,i--)
	{
		c = str[j];

	       str[j] = str[i];

       		str[i] = c;
	}

	printf("%s\n",str);

	return 0;
}





