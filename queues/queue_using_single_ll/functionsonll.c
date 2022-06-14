#include"header.h"

void  inbefore_pos(int pos,node *dummy)
{
	node *tmp  = dummy,*new = NULL; 
	int i = 1;
	while(i<pos-1)
		{
			tmp = tmp->next;
			i++;		   
		}
	new = create_node();
	new->next = tmp->next;
	tmp->next = new;	
}

node * create_node(void)
   {
           node *temp =  (node *)malloc(sizeof(node));
           printf("Enter student roll number");
           scanf("%d",&(temp->a));
           temp->next = NULL;
           return temp;
  }
  
void traverse(node * s1)
  {
          printf("Nodes of ll are\n");
          while(s1)
          {
                  printf("%d\n",s1->a);
                  s1 = s1->next;
          }
  }


node * pop(node * temp)
{
	node *dummy = temp,*temp2 = NULL;
	while(dummy->next->next != NULL)
		{
			dummy = dummy->next;
		}
	temp2 = dummy->next;
	free(temp2);
	dummy->next = NULL;
	return dummy;
}

	
node *dequeue(node *temp)
{
	node *dummy = temp,*temp1 = temp->next;
	free(temp);
	return temp1;
}
		
