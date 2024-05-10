#include <stdio.h>
#include<stdlib.h>
#include "ll_opr.h"

int main(void)
{
	int num,choice = 1,data,pos,insert,delete,create;
	ll_opr *head = NULL;
	//ll_opr *head = malloc(sizeof(struct linked_list));
	printf("Choose 1 for creating a node 1st, then select the operations:\nMENU\n1.insert at begining\t2.insert at a given position\t3.insert at last\n4.delete at begining\t5.delete at a given position\t6.delete at last\n7.Display\t8.EXIT\n");
	while (choice != 0 && choice < 8) {
		printf("enter the choice:");
		scanf("%d",&choice);
		printf("\n");
		switch(choice) {
			case 1:	printf("insert at beg\n");
				printf("enter the data to insert:");
				scanf("%d",&data);
				insert = insert_ll_beg(&head,data);
				if (insert == 0) {
					printf("can't insert\n");
				}else {
					printf("sucessfully inserted\n");
				}
				printf("\n");
				break;
			case 2:	printf("insert at a given position\n");
				printf("enter the data and position to insert:");
				scanf("%d %d",&data,&pos);
				insert = insert_ll_pos(&head,data,pos);
				if (insert == 0) {
					printf ("can't insert\n");
				}else {
					printf("Node inserted successfully at the given position\n");
				}
				printf("\n");
				break;
			case 3:	printf("insert at last\n");
				printf("enter the data to insert:");
				scanf("%d",&data);
				insert = insert_ll_last(&head,data);
				if (insert == 0) {
					printf("can't insert\n");
				} else {
					printf("Inserted\n");
				}
				break;
			case 4:	printf("delete at beg\n");
			       	delete = delete_ll_beg(&head);
				if (delete == 0) {
					printf("can't delete");
				}else {
					printf("deleted successfully");
				}
			       	break;
			case 5:	printf("delete at mid\n");
				printf("enter the position to delete:");
				scanf("%d",&pos);
			       	delete = delete_ll_pos(&head,pos);
				if (delete == 0) {
					printf("can't delete");
				}else {
					printf("deleted successfully");
				}
				printf("\n");
			       	break;
			case 6:	printf("delete at last\n");
			       	delete = delete_ll_last(&head);
				if (delete == 0) {
					printf("can't delete");
				}else {
					printf("deleted successfully");
				}
				printf("\n");
			       	break;
			case 7:	printf("Displaying linked list\n");
			       	display_ll(head);
			       	break;
			default:printf("YOU HAVE CHOOSEN WRONG OPTIONS");
		}
	}
	return 0;
}
