#include <stdio.h>

int main() {
    FILE *source, *destination;
    char ch;

    // Open source file in read mode
    source = fopen("source2.txt", "r");//if you give "w" in place of "r" it will create source file automatically
    if (source == NULL) {
        printf("Error: Unable to open source file.\n");
        return 1;
    }

    // Open destination file in write mode
    destination = fopen("destination2.txt", "w");
    if (destination == NULL) {
        printf("Error: Unable to create destination file.\n");
        fclose(source);
        return 1;
    }

    // Copy contents from source to destination
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    // Close files
    fclose(source);
    fclose(destination);

    printf("File copied successfully.\n");
    return 0;
}

