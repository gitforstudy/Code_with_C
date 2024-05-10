#include<stdio.h>
#include<stdlib.h>

struct node
{
	int i;
	struct node *next;
};

int main()
{
	struct node *d = (struct node *)malloc(sizeof(struct node));
	
	struct node *head=0;
		
	struct node *new;
		new=malloc(sizeof(struct node));
		
			
		new->next=head;
		
		head=new;
		
		while(1){
			main();
		}
}
