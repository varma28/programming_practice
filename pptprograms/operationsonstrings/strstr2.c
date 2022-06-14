#include<stdio.h>

int strstr1(const char *str,const char *str1)
{
int i,j,k,m,count = 0;
//printf("%s",str);

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
			return k;
			
		}
		else
			count = 0;
	}
return -1;
	
}

int main()
{
	char str1[20] = "Varma",str[4] = "arm";
	int a = strstr1(str1,str);
	printf("It is present at index%d\n",a);
	return 0;
}


