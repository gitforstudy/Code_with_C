#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	char str[20];
	//int result;
	//char c = ' ';
	fp = fopen(argv[1], "r+");
	if(fp == NULL) {
		printf("cannot open\n");
		exit(0);
	}
	fseek(fp, 0L, SEEK_SET);
	char ch;
	int i = 0;
	//printf("%d", ftell(fp));
	while((ch = fgetc(fp)) != EOF) {
		if(str[i] == ' ') {
			i--;
			str[i+1] = ' ';
		} /*else {
			fputc(ch, fp);
		}*/
		i++;
	}
	printf("file replaced successfully\n");
	fclose(fp);
	return 0;
}
