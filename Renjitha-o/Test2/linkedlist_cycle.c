//program to detect cycle in linkedlist

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
        if(*head == NULL) {
                *head = create_ll(data);
        }else if(*head != NULL) {
                ptr = create_ll(data);
                ptr -> next = *head;
                *head = ptr;
        }
}

// function to insert a new node at new position

void insert_ll_pos(ll_opr **head,int data,int pos) {
        int count = 1;
        ll_opr *temp = *head,*ptr,*ptr1 = *head;
        if (*head == NULL){
                *head = create_ll(data);
        } else if(*head != NULL){
                ptr = create_ll(data);
                while (ptr1 -> next != NULL){
                        ptr1 = ptr1 -> next;
                        count++;
                }if (pos > count) {
                        printf ("you cant't insert\n");
                }
                /* if (temp == NULL || temp -> next == NULL) {
                        printf("You can't insert\n");
                }*/
                for (int i = 0; i < pos - 1; i++) {
                        temp = temp -> next;
                }
                ptr ->next = temp -> next;
                temp -> next = ptr;
        }
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

void display(ll_opr *head)
{
	ll_opr *temp = head;
	while(temp -> next != NULL) {
		printf("%d ->",temp -> data);
		temp = temp -> next;
	}
	printf("NULL\n");
}

void create_loop(ll_opr **head)
{
	ll_opr *ptr = *head,*ptr1 = *head;
	//ptr1 = ptr1 -> next;
	while(ptr -> next != NULL){
		ptr = ptr -> next;
	}
	ptr -> next = ptr1 ->next;
}

void detect_cycle(ll_opr **head)
{
    ll_opr *temp = *head, *ptr = *head;
    while (ptr != NULL && ptr->next != NULL) {
        temp = temp->next;
        ptr = ptr->next->next;
        if (temp == ptr) {
            printf("Loop detected in linked list\n");
            return;
        }
    }
    printf("No loop\n");
}


/*void detect_cycle(ll_opr **head)
{
	ll_opr *temp = *head,*ptr = *head;
	while(temp && ptr && temp -> next != NULL) {
		temp = temp -> next;
		ptr = ptr -> next -> next;
		*if(temp == ptr) {
			printf("loop detected in linkedlist\n");
		}
		else {
			printf("no loop\n");
		/
	}
	if(temp == ptr) {
		printf("loop detected in linkedlist\n");
	}else {
		printf("no loop\n");
	}
}*/
int main(void)
{
	int choice = 1,data,pos;
	ll_opr *head = NULL;
	head = (ll_opr*)malloc(sizeof(ll_opr));
	while(choice != 0 && choice < 6) {
		printf("MENU\n1.ADD at beg\t2.ADD at last\t3.detect cycle\t4.display\t5.create loop\t6.EXIT\n");
		printf("enter the choice:");
		scanf("%d",&choice);
		/*printf("enter the data:\n");
		scanf("%d",&data);
		printf("enter the position:\n");
		scanf("%d",&pos);*/
		switch(choice) {
			case 1:printf("enter the data:\n");
			       scanf("%d",&data);
			       insert_ll_beg(&head,data);
			       break;
			case 2:printf("enter the data:\n");
			       scanf("%d",&data);
			       insert_ll_last(&head,data);
			       break;
			case 3:detect_cycle(&head);
			       break;
			case 4:display(head);
			      break;
			case 5:create_loop(&head);
			       break;
			default:printf("enter correct option:\n");
				exit(0);
		}
	}
	return 0;
}
