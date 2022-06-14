#include"header.h"

int main()
{
	node *head = NULL,*new = NULL,*last = NULL;
	int i ;
	printf("Choose the options:\n 1.To add a node \n 2.To remove the last node \n 3.To remove a node with a key\n 4.Insert after key\n 5.Insert before key.\n 6.Insert before head\n7.Insert after last node\n");
	scanf("%d",&i);
	while('1')
		{
			if(i == 1)
			       break	;
			else
				printf("Please create a linked list first\n");
		}
	while('1')
		{
		  switch(i){
				case 1:
					if(!head){
							head = createnode();
							last = head;
						}
					else{
							new = createnode();
							last->next = new;
							last = new;
					     }
					traverse(head);
					break;
	         		case 2:
					if(!head)
						printf("Stack is empty\n");
					else if(head == last)
						{
						    free(head);
					            head = NULL;
						}
					else{
						last = remove(last);
						traverse(head);
					    }
					break;
				case 3:
					head = removenode(head,key);
					break;
				case 4:
					inafterkey(head,key);
					break;
				case 5:
					head = inbeforekey(head,key);
					break;
				case 6:
					head = beforehead(head);
					break
				case 7:
					last = afterlast(last);
					break;
				case 8:
					printf("Exiting\n");
					break;
				default:
					printf("Invalid option\n");
					break;
			}
		if(i == 8)
			break;
		printf("Enter i value: ");
		scanf("%d",&i);
	  }
return 0 ;
}


