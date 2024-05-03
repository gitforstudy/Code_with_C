#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node *next;
} Node;

Node* head = NULL;

Node* createNode(int data) {
	Node *newNode = (Node*)malloc(sizeof(Node));
	if(newNode == NULL) {
		printf("Memory not availabl\n");
		exit(1);
	}
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

void append(int data) {
	Node* newNode = createNode(data);
	if(head == NULL) {
		head = newNode;
	} else {
		Node* temp = head;
		while(temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = newNode;
	}
}

void printList() {
	Node* temp = head;
	while(temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void deleteNode(int data) {
	Node* temp = head;
	Node* prev = NULL;
	while(temp != NULL && temp->data != data) {
		prev = temp;
		temp = temp -> next;
	}
	if(temp == NULL) {
		printf("Node %d not found\n", data);
		return;
	}

	if(prev == NULL) {
		head = temp->next;
	} else {
		prev->next = temp->next;
	}
	free(temp);
}

void changeData(int oldData, int newData) {
	Node* temp = head;
	while(temp != NULL && temp -> data != oldData) {
		temp = temp->next;
	}
	if(temp == NULL) {
		printf("Node %d not found\n", oldData);
		return;
	}
	temp->data = newData;
}

void writeToFile(char *argv[]) {
	FILE* fp = fopen(argv[1], "w");
	if(fp == NULL) {
		printf("cannot open\n");
		exit(1);
	}
	Node* temp = head;
	while (temp != NULL) {
		fprintf(fp, "%d ", temp->data);
		temp = temp->next;
	}
	fclose(fp);
}

int main(int argc, char *argv[])
{
	for(int i = 1; i <= 50; i++) {
		append(i);
	}
	printf("Initial List: ");
	printList();
	writeToFile(argv[1]);
	printf("List written to file '%s'\n", argv[1]);

	int choice, nodeData, newData;
	FILE* fp = fopen(argv[1], "r+");
	if(fp == NULL) {
		printf("Error opening file\n");
		exit(1);
	}

	while(1) {
		printf("Choose operation: \n");
		printf("1. Delete a node\n");
		printf("2. Append a node\n");
		printf("3. Change a node\n");
		printf("4. Exit\n");
		printf("Enter the choice: ");
		scanf("%d", &choice);

		switch(choice) {
			case 1: printf("Enter data: ");
				scanf("%d", &nodeData);
				deleteNode(nodeData);
				fseek(fp, 0, SEEK_SET);
				writeToFile(argv[1]);
				printf("Updated List %s\n", argv[1]);
				break;

			case 2: printf("Enter data: ");
				scanf("%d", &nodeData);
				append(nodeData);
				fseek(fp, 0, SEEK_END);
				fprintf(fp, "%d ", nodeData);
				printf("Updated List %s\n", argv[1]);
				break;

			case 3: printf("Enter data: ");
				scanf("%d", &nodeData);
				printf("Enter new data: ");
				scanf("%d", &newData);
				changeData(nodeData, newData);
				fseek(fp, 0, SEEK_SET);
				writeToFile(argv[1]);
				printf("Updated List %s\n", argv[1]);
				break;

			default: printf("Invalid Choice\n");
		}
	}
	return 0;
}
