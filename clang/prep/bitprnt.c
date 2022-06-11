#include<stdio.h>
#include<stdlib.h>
char * bitprnt(int n,int len)
{
	char *binary = (char *)malloc(sizeof(char )*len);
	int k = 0;
	for(unsigned i = (1<<len-1);i>0;i = i/2){
		binary[k++] = (n&i)?'1':'0';
	}
	binary[k] = '\0';
	return binary;
}

int main(void)
{
	int n ;
	int len ;
	printf("Enter the number and number of binary digits\n");
	scanf("%d%d",&n,&len);
	char * binary  = bitprnt(n,len);
	printf("%s\n",binary);
	free(binary);
	return 0;
}
