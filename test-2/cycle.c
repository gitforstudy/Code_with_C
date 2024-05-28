#include <stdio.h>
#include <stdlib.h>

// Definition of the node
struct Node {
    int data;
    struct Node* next;
};

// Function to detect cycle in the linked list
int detectCycle(struct Node* head) {
    struct Node *slow = head, *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;           // Move slow pointer by one
        fast = fast->next->next;     // Move fast pointer by two

        // If slow and fast meet at some point, then there is a cycle
        if (slow == fast) {
            return 1;
        }
    }
    return 0;  // No cycle found
}

// Function to create a new node
struct Node* newNode(int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

// Function to print the linked list (for testing purposes)
void printList(struct Node *node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

// Main function to test the cycle detection
int main() {
    struct Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);

    // Creating a cycle for testing
//    head->next->next->next->next->next = head->next;

    if (detectCycle(head)) {
        printf("Cycle detected.\n");
    } else {
        printf("No cycle detected.\n");
    }

    return 0;
}

