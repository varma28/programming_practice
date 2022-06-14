#include"header.h"

int main()
{
	int i ;
	node *head = NULL,*new = NULL,*last = NULL;
	printf("Choose 1 for push \n2 for pop\n 3 for exit\n");
	scanf("%d",&i);

	while(1){
		switch(i)
		{
			case 1:
				if(!head){
					head = create_node();
					last = head;
				}
				else{
					new = create_node();
					last->next = new;
					last = new;
				}
				traverse(head);
				break;
			case 2:
				if(!head)
					printf("Stack is empty\n");
				else if(head == last){
					free(head);
					head = NULL;
					printf("The queue has one node which is freed now\n");
					}
				else{
					head = dequeue(head);
					traverse(head);
				}
				
				break;
			case 3:
				printf("Exiting\n");
				break;
			default:
				printf("Entered an invalid statement\n");
				break;
		}
	if(i == 3)
 	break;
	scanf("%d",&i);
			}
		return 0 ;
	}






