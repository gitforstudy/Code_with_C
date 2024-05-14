#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	char ch;
	int c = 0;
	fp = fopen(argv[1], "r+");
	if(fp == NULL) {
		printf("Provide file name\n");
		exit(0);
	}
	rewind(fp);
	ch = fgetc(fp);
	while(ch != EOF) {
		if(c % 2 == 0) {
			if(ch >= 'a' && ch <= 'z') {
				ch = ch - 32;
			} else if(ch >= 'A' && ch <= 'Z') {
				ch = ch + 32;
			}
			fseek(fp, -1, SEEK_CUR); // Move the file pointer back by 1 character
            		fputc(ch, fp); // Write the modified character
            		fseek(fp, 0, SEEK_CUR);
		}
		c++;
		ch = fgetc(fp);
			
		//ch = ch+2;
	}
	printf("File replaced successfully\n");
	fclose(fp);
	return 0;
}
