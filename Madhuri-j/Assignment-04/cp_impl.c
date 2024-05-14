#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp, *fp1;
    	char ch;
    	fp = fopen(argv[1], "r");
    	if(fp == NULL) {
        	printf("File not exists");
        	exit(0);
    	}
    	fp1 = fopen(argv[2], "a");
    	if(fp1 == NULL) {
        	printf("File not exists");
        	exit(0);
    	}
    	rewind(fp);
    	ch = fgetc(fp);
    	while(ch != EOF) {
        	fputc(ch, fp1);
        	ch = fgetc(fp);
    	}
    	fclose(fp);
    	fclose(fp1);
    	return 0;
}
