//This is a program to set a particular bit at a particular position using bitwise operator logical or |

#include<stdio.h>

#define set(x,y)  (x|(0x1<<y))

int main()
{
	int a,b;
	printf("Enter the number \n ");
	scanf("%d",&a);
	printf("Enter the bit position \n");
	scanf("%d",&b);
	printf("The final output after setting the bit at given position is %d\n",set(a,b));
	return 0;
}
