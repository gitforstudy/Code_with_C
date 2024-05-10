//program to implement grep comand in c

#include<stdio.h>
int main(int argc,char *argv[])
{
	FILE *fp;
	fp = fopen(argv[0],"r+");
	if(fp == NULL) {
		perror("Can't open");
		exit(EXIT_FAILURE);
	}
	char str[] = "hello",str1[] = "hiii";
	ch = fgetc(fp);
	int i = 0;
	while(ch != EOF) {
		if(ch == str[i]) {
			
		}
	}
	printf("GREP command worked successfully\n");
	return 0;
}
