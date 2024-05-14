#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 50
#define MAX_LINE_LENGTH 55

void printMenu() {
	printf("\nMenu:\n");
    	printf("1. Delete a particular line or node data\n");
    	printf("2. Append data to a particular line or node\n");
    	printf("3. Change data of a particular line or node\n");
    	printf("4. Exit\n");
}

void deleteNode(const char *filename, int lineNumber) {
    	FILE *file = fopen(filename, "r");
    	if (file == NULL) {
        	printf("Error opening file!\n");
        	return;
    	}

    	FILE *tempFile = fopen("temp.txt", "w");
    	if (tempFile == NULL) {
        	printf("Error creating temporary file!\n");
        	fclose(file);
        	return;
    	}

    	char line[MAX_LINE_LENGTH];
    	int currentLine = 1;

    	while (fgets(line, sizeof(line), file)) {
        	if (currentLine != lineNumber) {
            		fputs(line, tempFile);
        	}
        	currentLine++;
    	}

    	fclose(file);
    	fclose(tempFile);

    	remove(filename);
    	rename("temp.txt", filename);

    	printf("Line %d deleted successfully.\n", lineNumber);
}

void appendNode(const char *filename, int lineNumber, const char *data) {
    	FILE *file = fopen(filename, "r+");
    	if (file == NULL) {
        	printf("Error opening file!\n");
        	return;
    	}

    	FILE *tempFile = fopen("temp.txt", "w");
    	if (tempFile == NULL) {
        	printf("Error creating temporary file!\n");
        	fclose(file);
        	return;
    	}

    	char line[MAX_LINE_LENGTH];
    	int currentLine = 1;
	long int pos = 0;

    	while (fgets(line, sizeof(line), file)) {
        	if (currentLine == lineNumber) {
            		fputs(data, tempFile);
            		//fputc('\n', tempFile);
        	} else {
            		fputs(line, tempFile);
        	}
        	currentLine++;
    	}

    	fclose(file);
    	fclose(tempFile);

    	remove(filename);
    	rename("temp.txt", filename);

    	printf("Data appended to line %d successfully.\n", lineNumber);
}

void changeNode(const char *filename, int lineNumber, const char *data) {
    	FILE *file = fopen(filename, "r");
    	if (file == NULL) {
        	printf("Error opening file!\n");
        	return;
    	}

    	FILE *tempFile = fopen("temp.txt", "w");
    	if (tempFile == NULL) {
        	printf("Error creating temporary file!\n");
        	fclose(file);
        	return;
    	}

    	char line[MAX_LINE_LENGTH];
    	int currentLine = 1;

    	while (fgets(line, sizeof(line), file)) {
        	if (currentLine == lineNumber) {
            		fputs(data, tempFile);
            		//fputc('\n', tempFile);
        	} else {
            		fputs(line, tempFile);
        	}
        	currentLine++;
    	}

    	fclose(file);
    	fclose(tempFile);

    	remove(filename);
    	rename("temp.txt", filename);

    	printf("Data of line %d changed successfully.\n", lineNumber);
}

int main() {
    	const char *filename = "data.txt";
    	int choice, lineNumber;
    	char data[MAX_LINE_LENGTH];

    	while (1) {
        	printMenu();
        	printf("Enter your choice: ");
        	scanf("%d", &choice);

        	switch (choice) {
            		case 1:
                		printf("Enter the line number to delete: ");
                		scanf("%d", &lineNumber);
                		deleteNode(filename, lineNumber);
                		printf("File updated successfully.\n");
                		break;
            		case 2:
                		printf("Enter the line number to append data: ");
                		scanf("%d", &lineNumber);
                		printf("Enter the data to append: ");
                		getchar(); // Consume newline character left in buffer
                		fgets(data, sizeof(data), stdin);
                		appendNode(filename, lineNumber, data);
                		printf("File updated successfully.\n");
                		break;
            		case 3:
                		printf("Enter the line number to change data: ");
                		scanf("%d", &lineNumber);
                		printf("Enter the new data: ");
                		getchar(); // Consume newline character left in buffer
                		fgets(data, sizeof(data), stdin);
                		changeNode(filename, lineNumber, data);
                		printf("File updated successfully.\n");
                		break;
            		case 4:
                		printf("Exiting...\n");
                		exit(0);
            		default:
                		printf("Invalid choice! Please try again.\n");
        	}
    	}

    	return 0;
}

