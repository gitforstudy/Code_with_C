//program to count no.of alphabets,numeric characters,special characters in a given string

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char str[50];// = {"Hi How are you123 guys@@**?%"};
	printf("enter the string:\n");
	scanf("%[^\n]%*c",str);
	int len = strlen(str);
	printf("string length:%d",len);
	int alpha = 0,num = 0,spec_cha = 0;
	for(int i = 0; i < len; i++) {
		if(str[i] >= 'a' && str[i] <= 'z' || str[i] == 'A' && str[i] == 'Z') {
			alpha++;
		}
		else if(str[i] >= '0' && str[i] <= '9'){
			num++;
		}/*else if(str[i] == ' '){
			spec_cha++;
		}*/else {
			spec_cha++;
		}
	}
	printf("Alphabets:%d\t numeric :%d\t special_characters:%d\n",alpha,num,spec_cha);
	return 0;
}
