//program to delete node from last of a linkedlist(count from lastnode)

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

void delete_last_n(ll_opr **head, int pos) {
    ll_opr *Ptr = *head;
    ll_opr *temp = *head;
    ll_opr *prev = NULL;

    // Move the fast pointer ahead by 'positionFromLast' nodes
    for (int i = 0; i < pos; i++) {
        if (Ptr == NULL) {
            printf("Invalid position\n");
            return;
        }
        Ptr = Ptr->next;
    }

    // Move both pointers until the fast pointer reaches the end
    while (Ptr->next != NULL) {
        prev = temp;
        temp = temp->next;
        Ptr = Ptr->next;
    }

    // If the node to be deleted is the head node
    if (temp == *head) {
        *head = (*head)->next;
    } else {
        prev->next = temp->next;
    }

    // Free the memory of the node to be deleted
    free(temp);
}

void display(ll_opr *head)
{
        ll_opr *temp = head;
        while(temp -> next != NULL) {
                printf("%d ->",temp -> data);
                temp = temp -> next;
        }
        printf("NULL");
}

int main(void)
{
        int choice = 1,data,pos;
        ll_opr *head = NULL;
        head = (ll_opr*)malloc(sizeof(ll_opr));
       while(choice != 0 && choice < 6) {
                /*printf("enter choice");
		scanf("%d",&choice);*/
		printf("MENU\n1.ADD at beg\t2.ADD at pos\t3.ADD at last\t4.Display\t5.Delete at n pos fromlast\t6.Exit");
		printf("enter choice");
                scanf("%d",&choice);
		switch(choice) {
			case 1:printf("enter the data:\n");
			       scanf("%d",&data);
				insert_ll_beg(&head,data);
				break;
			case 2:printf("enter the position:\n");
			       scanf("%d",&pos);
			       delete_last_n(&head,pos);
			       break;
			case 3:printf("enter the data:\n");
                               scanf("%d",&data);
                                insert_ll_last(&head,data);
                                break;
			case 4:display(head);
			       break;
			case 5:printf("enter the position:\n");
			       scanf("%d",&pos);
			       delete_last_n(&head,pos);
			       break;
			default:printf("Wrong option\n");
				exit(0);
		}
       }
        return 0;

}
