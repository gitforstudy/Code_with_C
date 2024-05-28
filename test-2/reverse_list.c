#include<stdio.h>
#include <stdlib.h>


typedef struct Node {
    int data;
    struct Node* next;
} Node;

void reverse(Node** head){
	struct Node* curr=*head;
	struct Node* temp=NULL,*prev=NULL;
	while(curr!=NULL){
		prev=curr->next;
		curr->next=temp;
		temp=curr;
		curr=prev;
	}
	*head=temp;
}

void insert(Node** head, int newData) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = newData;
    newNode->next = (*head);
    (*head) = newNode;
}


void printList(Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}


int main() {
    Node* head = NULL;


    insert(&head, 5);
    insert(&head, 10);
    insert(&head, 15);

    printList(head);
    reverse(&head);
    printList(head);

    
}

