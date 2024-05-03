#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp = NULL;
	char ch;
	int characters = 0;
	int words = 1;
	int lines = 0;
	fp = fopen(argv[1], "r");
	if(fp == NULL) {
		printf("give filename to open\n");
		exit(0);
	}
	while((ch = fgetc(fp)) != EOF) {
		characters++;

		if(ch == '\n'){
			lines++;

		}else if(ch == ' ' || ch == '\0' || ch == '\t' || ch == '\n'){
			words++;
		}
	}

	/*if(characters > 0) {
		space++;
		//lines++;
	}*/
	printf("Number of characters: %d\n", characters);
	printf("Number of words: %d\n", words);
	printf("Number of lines: %d\n", lines);
	fclose(fp);
	return 0;
}
