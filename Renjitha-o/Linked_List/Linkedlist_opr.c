// program to do linkedlist operations(Add(beg,last,middle),Delete(beg,mid,last))

#include <stdio.h>
#include <stdlib.h>
#include "ll_opr.h"

// function to create a new node

ll_opr *create_ll(int data) {
	ll_opr *ptr = (ll_opr*)malloc(sizeof(ll_opr));
	if (ptr == NULL) {
		printf("MEMORY not allocated!!!");
	}
	ptr -> data = data;
	ptr -> next = NULL;
	return ptr;
}

// function to insert a new node at begining

int insert_ll_beg(ll_opr **head,int data) {
	ll_opr *ptr,*temp = *head;
	if(*head == NULL) {
		*head = create_ll(data);
		return 1;
	}else if(*head != NULL) {
		ptr = create_ll(data);
		ptr -> next = *head;
		*head = ptr;
		return 1;
	
	}else {
		return 0;
	}
}

// function to insert a new node at new position

int insert_ll_pos(ll_opr **head,int data,int pos) {
	int count = 1;
	ll_opr *temp = *head,*ptr,*ptr1 = *head;
	if (*head == NULL){
		*head = create_ll(data);
		return 1;
	} else if(*head != NULL){
		ptr = create_ll(data);
		while (ptr1 -> next != NULL){
			ptr1 = ptr1 -> next;
			count++;
		}
		if (pos > count) {
			printf ("you cant't insert\n");
			return 0;
		}
		/* if (temp == NULL || temp -> next == NULL) {
                        printf("You can't insert\n");
                }*/
		for (int i = 0; i < pos - 1; i++) {
			temp = temp -> next;
		}
		ptr ->next = temp -> next;
		temp -> next = ptr;
		return 1;
	}else {
		return 0;
	}
}

// function to insert a new node at last

int  insert_ll_last(ll_opr **head,int data) {
	if (*head == NULL) {
		*head = create_ll(data);
		return 1;

	}else if(*head != NULL) {
		ll_opr *temp = *head,*ptr;
		ptr = create_ll(data);
		/*printf("enter the data");
		scanf("%d",&data);*/
		while (temp -> next != NULL) {
			temp = temp -> next;
		}
		temp -> next = ptr;
		ptr -> next = NULL;
		return 1;
	}else {
		return 0;
	}
}

//function to delete a node at begining

int delete_ll_beg(ll_opr **head) {
	if (*head == NULL) {
		printf("Can't Delete");
		return 0;
	} else if(*head != NULL) {
		ll_opr *temp = *head,*ptr = *head;
		temp = temp -> next;
		ptr -> next = NULL;
		*head = temp;
	//	temp = *head;
		return 1;
	}else {
		return 0;
	}
}

//function to delete a node at end

int delete_ll_last(ll_opr **head) {
	if(*head == NULL) {
		printf("can't Delete");
		return 0;
	}else if(*head != NULL){
		ll_opr *temp = *head;
		while (temp->next->next != NULL) {
			temp = temp -> next;
		}
		temp -> next = NULL;
		return 1;
	}else {
		return 0;
	}
}

// function to delete a node at middle

int delete_ll_pos(ll_opr **head,int pos) {
	ll_opr *temp = *head,*ptr,*ptr1 = *head;
	int count = 1;
	if ( pos == 0) {
		temp -> next = ptr;
		*head = ptr;
		return 1;
	}else if(pos >=  1) {
		 while (ptr1 -> next != NULL){
                        ptr1 = ptr1 -> next;
                        count++;
                }
                if (pos > count) {
                        printf ("you cant't delete\n");
                        return 0;
                }
		for (int i = 0; i < pos - 1 && temp != NULL; i++) {
			temp = temp -> next;
		}
		ptr1 = temp -> next;
		temp-> next  = ptr1-> next;
		free(ptr1);
		return 1;
	}else {
		return 0;
	}
}

// function to display the linked list

void display_ll(ll_opr *head) {
	ll_opr *ptr = head;
	while( ptr != NULL) {
		printf("%d",ptr -> data);
		ptr = ptr -> next;
	
	}
	printf("\n");
}

