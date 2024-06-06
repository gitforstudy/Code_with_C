#include<stdio.h>
#include<stdlib.h>

typedef struct ll_cycle{
        int data;
        struct ll_cycle *next;
}ll_opr;


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

void insert_ll_beg(ll_opr **head,int data) {
        ll_opr *ptr,*temp = *head;
        /*if(*head == NULL) {
                *head = create_ll(data);
        }else if(*head != NULL) {*/
                ptr = create_ll(data);
                ptr -> next = *head;
                *head = ptr;
       // }
}

// function to insert a new node at last

void  insert_ll_last(ll_opr **head,int data) {
        if (*head == NULL) {
                *head = create_ll(data);

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
        }
}

void reverse_ll(ll_opr **head)
{
	ll_opr *curr = NULL,*temp = NULL,*prev = NULL;
	curr=*head;
	while(curr != NULL){
		prev = curr -> next;
		curr -> next = temp;
		temp = curr;
		curr = prev;
	}
	*head = temp;
}

void display(ll_opr *head)
{
        ll_opr *temp = head;
        while(temp) {
                printf("%d ->",temp -> data);
                temp = temp -> next;
        }
        printf("NULL\n");
}

int main(void)
{
	int choice = 1,data,pos;
        ll_opr *head = NULL;
        head = (ll_opr*)malloc(sizeof(ll_opr));
        while(choice != 0 && choice < 5) {
                /*printf("enter choice");
                scanf("%d",&choice);*/
                printf("MENU\n1.ADD at beg\t\t2.ADD at last\t3.Display\t4.Reverse\t5.Exit\n");
                printf("enter choice:");
                scanf("%d",&choice);
                switch(choice) {
                        case 1:printf("enter the data:\n");
                               scanf("%d",&data);
                                insert_ll_beg(&head,data);
                                break;
                        case 2:printf("enter the data:\n");
                               scanf("%d",&data);
                                insert_ll_last(&head,data);
                                break;
                        case 3:display(head);
                               break;
                        case 4:reverse_ll(&head);
                               break;
                        default:printf("Wrong option\n");
                                exit(0);
                }
       }
        return 0;

}
