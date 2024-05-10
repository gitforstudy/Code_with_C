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

    FILE *large = fopen(argv[1], "r+");
    FILE *small = fopen(argv[2], "r+");

    if (large == NULL || small == NULL) {
        printf("Error: Unable to open file(s).\n");
        return 1;
    }

    long size1 = getFileSize(large);
    long size2 = getFileSize(small);

    fseek(large, 0, SEEK_END);
    fseek(small, 0, SEEK_SET);

    if (size2 > size1){
        FILE *temp = large;
        large = small;
        small = temp;
    }

    int ch;
    while((ch = fgetc(small)) != EOF){
        fputc(ch, large);
    }

    fclose(large);
    fclose(small);

    printf("Content of smaller file has been appended to the larger file.\n");

    return 0;
}
