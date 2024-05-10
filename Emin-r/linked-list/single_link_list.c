#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to add a node at the beginning of the linked list
struct Node* addAtBeginning(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = head;
    printf("Node has been added at the beginning\n");
    return newNode;
}

// Function to add a node at the end of the linked list
struct Node* addAtEnd(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        return newNode;
    }
    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    printf("Node has been added at the end\n");
    return head;
}

// Function to add a node at a given position in the linked list
struct Node* addAtPosition(struct Node* head, int data, int position) {
    if (position <= 0) {
        printf("Invalid position!\n");
        return head;
    }
    if (position == 1) {
        return addAtBeginning(head, data);
    }
    struct Node* newNode = createNode(data);
    struct Node* temp = head;
    for (int i = 1; i < position - 1; i++) {
        if (temp == NULL) {
            printf("Position out of range!\n");
            return head;
        }
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Position out of range!\n");
        return head;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    printf("Node has been added at %d position\n",position);
    return head;
}

// Function to delete a node at a given position in the linked list
struct Node* deleteAtPosition(struct Node* head, int position) {
    if (head == NULL) {
        printf("List is empty!\n");
        return head;
    }
    if (position <= 0) {
        printf("Invalid position!\n");
        return head;
    }
    struct Node* temp = head;
    if (position == 1) {
        head = head->next;
        free(temp);
        return head;
    }
    for (int i = 1; i < position - 1; i++) {
        if (temp == NULL || temp->next == NULL) {
            printf("Position out of range!\n");
            return head;
        }
        temp = temp->next;
    }
    struct Node* nodeToDelete = temp->next;
    if (nodeToDelete == NULL) {
        printf("Position out of range!\n");
        return head;
    }
     temp->next = nodeToDelete->next;
    free(nodeToDelete);
    printf("Node has been deleted at %d position\n",position);
    return head;
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

// Function to display menu and get user choice
int menu() {
    int choice;
    printf("\nLinked List Operations:\n");
    printf("1. Add node at the beginning\n");
    printf("2. Add node at the end\n");
    printf("3. Add node at a given position\n");
    printf("4. Delete node at a given position\n");
    printf("5. Display the linked list\n");
    printf("6. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;
}

// Main function to the linked list operations
int main() {
    struct Node* head = NULL;
    int data, position;
    int choice;

    do {
        choice = menu();

        switch (choice) {
            case 1:
                printf("Enter data to add at the beginning: ");
                scanf("%d", &data);
                head = addAtBeginning(head, data);
                break;
            case 2:
                printf("Enter data to add at the end: ");
                scanf("%d", &data);
                head = addAtEnd(head, data);
                break;
            case 3:
                printf("Enter data to add: ");
                scanf("%d", &data);
                printf("Enter position to add: ");
                scanf("%d", &position);
                head = addAtPosition(head, data, position);
                break;
            case 4:
                printf("Enter position to delete: ");
                scanf("%d", &position);
                head = deleteAtPosition(head, position);
                break;
            case 5:
                printf("Linked List: ");
                display(head);
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 6.\n");
        }

    } while (choice != 6);

    return 0;
}
