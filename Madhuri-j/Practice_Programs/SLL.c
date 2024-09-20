#include <stdio.h>
#include <stdlib.h>


struct node {
        int data;
        struct node *next;
};

typedef struct node NODE;

NODE *createnode(int data);
void insertnodebeg(NODE **head, int data);
void insertnodemid(NODE **head, int data);
void insertnodeend(NODE **head, int data);
void deletenodebeg(NODE **head);
void deletenodemid(NODE **head);
void deletenodeend(NODE *head);
void printlist(NODE *head);
void reverselist(NODE **head);

NODE *createnode(int data)
{
        NODE *newnode = (NODE *)malloc(sizeof(NODE));
        newnode->data = data;
        newnode->next = NULL;
        return newnode;
}

void insertnodebeg(NODE **head, int data)
{
        NODE *newnode = createnode(data);
        if(*head == NULL) {
                *head = newnode;
        } else {
                newnode->next = *head;
                *head = newnode;
        }
}

void insertnodemid(NODE **head, int data)
{
        NODE *newnode = createnode(data);
        NODE *temp = *head;
        int i, pos;
        printf("Enter the position to insert the node: ");
        scanf("%d", &pos);
        for(i = 0; i < pos-1; i++) {
                temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
}

void insertnodeend(NODE **head, int data)
{
        NODE *newnode = createnode(data);
        if(*head == NULL) {
                *head = newnode;
        } else {
                NODE *temp = *head;
                while(temp->next != NULL) {
                        temp = temp->next;
                }
                temp->next = newnode;
        }
}

void deletenodeend(NODE *head)
{
        if(head == NULL) {
                printf("List is empty!!\n");
                return;
        }
        if(head->next == NULL) {
                free(head);
                head = NULL;
        }
        NODE *temp = head;
        while(temp->next->next != NULL) {
                temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
}

void deletenodebeg(NODE **head)
{
        if(*head == NULL) {
                printf("List is empty!!\n");
                return;
        }

        if((*head)->next == NULL) {
                free(*head);
                *head = NULL;
                return;
        }

        NODE *temp = *head;
        *head = (*head)->next;
        free(temp);
}

void deletenodemid(NODE **head)
{
        NODE *temp = *head;
        int i, pos;
        printf("Enter the position of node to delete: ");
        scanf("%d", &pos);
        if(*head == NULL) {
                printf("List is empty!!\n");
                return;
        }
        if((*head)->next == NULL) {
                free(*head);
                *head = NULL;
                return;
        }
        if(pos == 0) {
                temp = *head;
                *head = (*head)->next;
                free(temp);
                return;
        }
        for(i = 0; i < pos - 1; i++) {
                temp = temp->next;
        }
        NODE *temp1 = temp->next;
        temp->next = temp->next->next;
        free(temp1);
}

void reverselist(NODE **head)
{
        NODE *prev, *current, *next;
        prev = NULL;
        current = *head;
        next = NULL;
    
        while(current != NULL) {
                next = current->next;
                current->next = prev;
                prev = current;
                current = next;
        }
        *head = prev;
}

void printlist(NODE *head)
{
        NODE *temp = head;
        while(temp != NULL) {
                printf("%d-> ", temp->data);
                temp = temp->next;
        }
        printf("NULL\n");
}

void main()
{
        NODE *head = NULL;
        int beg, mid, end, choice, pos;
        while(1) {

                printf("Menu:\n1.Insert Begin\n2.Insert Middle\n3.Insert End\n4.Delete Begin\n5.Delete Middle\n6.Delete End\n7.Print List\n8.Reverse List\n9.Reversed List\n");
                scanf("%d", &choice);

                if (choice < 1 || choice > 9) {
                        break;
                }

                switch(choice) {
                        case 1: printf("Enter the data to insert: ");
                                scanf("%d", &beg);
                                insertnodebeg(&head, beg);
                                break;

                        case 2: printf("Enter the data to insert: ");
                                scanf("%d", &mid);
                                insertnodemid(&head, mid);
                                break;

                        case 3: printf("Enter the data to insert: ");
                                scanf("%d", &end);
                                insertnodeend(&head, end);
                                break;

                        case 4: deletenodebeg(&head);
                                break;

                        case 5: deletenodemid(&head);
                                break;

                        case 6: deletenodeend(head);
                                break;

                        printing: case 7: printlist(head);
                                break;

                        case 8: reverselist(&head);
                                break;

                        case 9: goto printing;
                                break;
                }
        }
}
      
