#include"headerfile.h"

std * create()
{
	std * m = (std *)malloc(1*sizeof(std));

	printf("Enter the student rollno\n");

	scanf("%d",&m->rollno);

	printf("Enter the student gender\n");

	scanf(" %c",&m->gender);

	printf("Enter the student name\n");

	scanf("%s",m->name);

	m->next = NULL;

	return m;
}

void traverse(std * m)
{
	std * dummy =m;

	while(dummy)
	{
		printf("The student name is %s\t",dummy->name);
		printf("The student roll no is %d\t",dummy->rollno);
		printf("The student gender is %c\n",dummy->gender);
		dummy = dummy->next;
	}
	return ;
}


std * locate(std * m,int p)
{
	std * dummy = m;

	while(dummy)
	{
		if(dummy->rollno == p)
			return dummy;
		else 
			dummy = dummy->next;
	}

	printf("There is no storage related to the given key value or roll number\n");
	return NULL;
}




std * reverse(std * m)
{
	std * dummy = m;

	
	
}

