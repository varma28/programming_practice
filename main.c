#include"header.h"

int main()
{
	int i;
	node *head = NULL,*new = NULL,*last = NULL,*temp = NULL;
	printf("Choose 1 for enque \n2 for deque\n 3 for exit\n");
	scanf("%d",&i);

	while(1){
		switch(i)
		{
			case 1: if(!head){
					head = create_node();
					last = head;
				}
				else{
					new = create_node();
					last->next = new;
					new->prev  = last;
					last       = new;
				}
				traverse(head);

				break;
			case 2:
				if(!head){
					printf("Stack is empty\n");
					break;
				}
				else if(head == last)
				{
					free(head);
					head  = NULL;
					printf("Stack contains only one node which is freed now\n");
					break;
				}
				else	{
					temp = last->prev;
					printf("%d",temp->a);					
					free(last);
					last = temp;
					last->next = NULL;
				}
				traverse(head);
				break;
			case 3:
				printf("Exiting the program \n");
				break;
			default:
				printf("Invalid option\n");
				break;
		}
		if(i == 3)
			break;
		scanf("%d",&i);
	}						

	return 0 ;
}





