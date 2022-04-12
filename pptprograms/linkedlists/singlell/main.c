#include"headerfile.h"

int main()
{
	std * head = NULL, *new = NULL,*last = NULL,*next = NULL;

	int i;

	while(1)
	{
		if(!head)
		{
			head = create();

			last = head;

		}
		else
		{
			new = create();

			last->next = new;

			last = new;
		}

		printf("Enter number 1 to continue 0 to stop");

		scanf("%d",&i);

		if(!i)
			break;
	}

	traverse(head);

	std * tmp = locate(head,3);

	if(tmp)
		printf("The student name is %s\n",tmp->name);
	
	  

	return 0;
}

