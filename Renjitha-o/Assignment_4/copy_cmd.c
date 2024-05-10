#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *src, *dest;
    char ch;

    // Check if the correct number of arguments are provided
    if (argc != 3) {
        printf("Usage: %s <source_file> <destination_file>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    // Open the source file in read mode
    src = fopen(argv[1], "r");
    if (src == NULL) {
        perror("Error opening source file");
        exit(EXIT_FAILURE);
    }

    // Open the destination file in write mode
    dest = fopen(argv[2], "w");
    if (dest == NULL) {
        perror("Error opening destination file");
        fclose(src);
        exit(EXIT_FAILURE);
    }

    // Copy contents character by character
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    // Close files
    fclose(src);
    fclose(dest);

    printf("File copied successfully.\n");

    return 0;
}

