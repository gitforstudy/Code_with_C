#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* newnode(int value){
	struct node* new=(struct node*) malloc(sizeof(struct node));
	new->data=value;
	new->next=NULL;
	return new;
	
	}
void print(struct node* head){
	while(head!=NULL){
	printf("%d->",head->data);
	head=head->next;
	}
	printf("NULL\n");

}
struct node* del(struct node* head,int pos){
	
	struct node *temp=head;
	int count=0;
	while(temp!=NULL){
		temp=temp->next;
		count++;
	}
	//printf("%d",count);
	int del=count-pos;
	//printf("%d",del);
	if (del < 0 || del >= count) {
        printf("Position out of bounds\n");
        return head;
    }

    // If the node to delete is the head node
    if (del == 0) {
        struct node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
	struct node *ptr=head;
	for (int i = 0; i < del - 1; i++) {

		ptr=ptr->next;
	}
	struct node* ptr1 = ptr->next;
	ptr->next=ptr1->next;
	free(ptr1);
	return head;
}

int main(){
	struct node* head=newnode(2);
	head->next=newnode(3);
	head->next->next=newnode(4);
	head->next->next->next=newnode(5);
	print(head);
	head=del(head,4);
	print(head);

}

