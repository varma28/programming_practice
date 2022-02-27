#include<stdio.h>

int main()
{
	int i,j,k,m,count;
	char str[10],str1[10];
	printf("enter string1\n");
	scanf("%s",str);
	printf("Enter string2\n");
	scanf("%s",str1);
	for(i=0;str[i];i++);
	for(j=0;str1[j];j++);
	i--;
	j--;

	for(k=0;k<i;k++)
	{
		for(m=0;m<j;m++)
		{
			if(str[k+m]==str1[m])
			{
				count++;
			}
		}
		if(count == j)
		{
			printf("second String is present in the first one and starts from index %d\n",k);
			break;
		}
		else
			count = 0;
	}
	return 0;
}


