#include <stdio.h>
#include <stdlib.h>

void append_file(FILE *small, FILE *big)
{
	char ch;
	while((ch = fgetc(small)) != EOF) {
		fputc(ch, big);
	}
}

int main(int argc, char* argv[])
{
	FILE *small, *big;
	small = fopen(argv[1], "r");
	if(small == NULL) {
		printf("cannot open\n");
		exit(0);
	}
	big = fopen(argv[2], "a");
	if(big == NULL) {
		printf("cannot open\n");
		fclose(small);
		exit(0);
	}
	append_file(small, big);
	fclose(small);
	fclose(big);
	printf("Contents of %s appended to %s\n", argv[1], argv[2]);
	return 0;
}
