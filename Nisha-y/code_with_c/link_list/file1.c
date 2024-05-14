#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end of the linked list
void append(struct Node** headRef, int data) {
    struct Node* newNode = createNode(data);
    if (*headRef == NULL) {
        *headRef = newNode;
        return;
    }
    struct Node* temp = *headRef;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to delete a node at given position
void deleteNode(struct Node** headRef, int position) {
    if (*headRef == NULL)
        return;
    struct Node* temp = *headRef;
    if (position == 0) {
        *headRef = temp->next;
        free(temp);
        return;
    }
    for (int i = 0; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL)
        return;
    struct Node* next = temp->next->next;
    free(temp->next);
    temp->next = next;
}

// Function to get nth node data
int getNodeData(struct Node* head, int n) {
    int count = 0;
    struct Node* current = head;
    while (current != NULL) {
        if (count == n)
            return current->data;
	else
        	count++;
        	current = current->next;
    }
    return -1; // Invalid index
}

// Function to display the linked list
void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    FILE *file;
    file = fopen("data.txt", "r+");
    if (!file) {
        perror("Unable to open file!");
        return 1;
    }

    struct Node* head = NULL;
    int data;

    // Reading data from file and appending to linked list
    while (fscanf(file, "%d", &data) != EOF) {
        append(&head, data);
    }

    fclose(file);

    int choice = 1;
    int position;

    printf("1. Append Node\n");
    printf("2. Delete Node\n");
    printf("3. Get nth Node\n");
    printf("4. display\n");
    /*printf("Enter your choice: ");
    scanf("%d", &choice);*/
    while(choice > 0 && choice < 5){
	    printf("Enter your choice: ");
    	    scanf("%d", &choice);
	    switch (choice) {
        	case 1:
            		printf("Enter data to append: ");
            		scanf("%d", &data);
            		append(&head, data);
            		break;
        	case 2:
            		printf("Enter position to delete: ");
            		scanf("%d", &position);
            		deleteNode(&head, position);
            		break;
        	case 3:
            		printf("Enter index to get data: ");
            		scanf("%d", &position);
            		printf("Data at position %d: %d\n", position, getNodeData(head, position));
            		break;
		case 4:printf("display\n");
	       		display(head);
	       		break;
        	default:
            		printf("Invalid choice!\n");
            		break;
    		}
    }

    // Writing data back to file
    file = fopen("data.txt", "w");
    if (!file) {
        perror("Unable to open file!");
        return 1;
    }
    struct Node* temp = head;
    while (temp != NULL) {
        fprintf(file, "%d ", temp->data);
        temp = temp->next;
    }
    fclose(file);

    // Displaying final linked list
    //display(head);

    // Freeing memory
    while (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

