#include<stdio.h>

int main()
{
        int i,j,k;

        char str[40],str1[10];

        printf("Enter a string\n");

        scanf("%s",str);

        printf("Enter string2\n");

        scanf("%s",str1);

        for(i=0;str[i];i++);

        for(j=0;str1[j];j++);

        printf("i = %d\t j = %d\n",i,j);

        for(k=0;k <= j;k++ )
        {
                str[k+i]=str1[k];

        }

        //k++;

        //str[k] = '\0';

        printf("%s\n",str);

        return 0;

}

