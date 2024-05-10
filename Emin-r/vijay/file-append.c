#include <stdio.h>
#include <stdlib.h>

long getFileSize(FILE *file) {
    fseek(file, 0, SEEK_END);
    long size = ftell(file);
    fseek(file, 0, SEEK_SET);
    return size;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <file1> <file2>\n", argv[0]);
        return 1;
    }

    FILE *file1 = fopen(argv[1], "r+");
    FILE *file2 = fopen(argv[2], "r+");

    if (file1 == NULL || file2 == NULL) {
        printf("Error: Unable to open file(s).\n");
        return 1;
    }

    long size1 = getFileSize(file1);
    long size2 = getFileSize(file2);

    FILE *largerFile;
    FILE *smallerFile;

    if (size1 >= size2) {
        largerFile = fopen(argv[1], "a+");
        smallerFile = file2;
    } else {
        largerFile = fopen(argv[2], "a+");
        smallerFile = file1;
    }

    if (largerFile == NULL) {
        printf("Error: Unable to open larger file.\n");
        fclose(file1);
        fclose(file2);
        return 1;
    }

    fseek(smallerFile, 0, SEEK_SET);
    fseek(largerFile, 0, SEEK_END);

    int ch;
    while ((ch = fgetc(smallerFile)) != EOF) {
        fputc(ch, largerFile);
    }

    fclose(file1);
    fclose(file2);
    fclose(largerFile);
    fclose(smallerFile);

    printf("Content of smaller file has been appended to the larger file.\n");

    return 0;
}

