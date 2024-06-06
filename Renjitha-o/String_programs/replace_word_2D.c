//program to replace a word in a string using 2d array

#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[25],p[5][50],word[50],replace[50];
	int space,count,j = 0,k = 0, i = 0;
	printf("enter the string:\n");
	scanf("%[^\n]s",str);
	printf("enter the word to replace:\n");
	scanf("%s",word);
	printf("enter new word:\n");
	scanf("%s",replace);
	int len = strlen(str);
	printf("string length:%d\n",len);
	/*for(int i = 0; i < strlen(str);i++) {
		if(str[i] == ' ') {
			space++;
		}
	}*/
	for(int i = 0; str[j] != '\0';j++) {
		if(str[j] == ' ') {
			space++;
			p[i][k] = '\0';
			i++;
			k = 0;
		}else {
			p[i][k++] = str[j];
		}
		//p[i][k] = '\0';
	}
	p[i][k] = '\0';
	printf("space:%d\n",space);
	for (int i = 0; p[i][0] != '\0'; i++) {
		for (j = 0; p[i][j] != '\0'; j++) {
			for (int l = 0; word[l] != '\0'; l++) {
				if (p[i][j] == word[l]) {
					p[i][j] = replace[l];
				}
			}
			//p[i][j] = '\0';
			//j++;
		}
		p[i][j] = '\0';
		//i++;
	}
	for(int i = 0; p[i][0] != '\0'; i++) {
		printf("%s ",p[i]);
	}
	return 0;
}
