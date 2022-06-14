#include"header.h"

int main()
{
	node *head = NULL,*new = NULL,*last = NULL;
	int opt = 0;
	printf("Enter 1 to quit the lsit addition: ");
	while(1)
	{
	new = create_node(); 
	if(!head)
	{
	head = new;
	last = head;
	last->next = NULL;
	}
	else
	{
	last->next = new;
	last = new;
	last->next = NULL;
	}

	scanf("%d",&opt);
	if(opt == 1)
		break;
	}

traverse(head);
int pos;
printf("calling insert node please enter the position: ");
scanf("%d",&pos);

inbefore_pos(pos,head);

traverse(head);

return 0 ;
}





