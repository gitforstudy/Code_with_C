//
//
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int a_to_i(char *s,int n){
	int num1 = s[n - 1] - '0';
	if(isdigit(s[n - 1])) {
		return num1 + 10 * a_to_i(s,n);
	}
//	return a_to_i(s,n);
}
int main(void)
{
	char s[] = "12345";
	int n = strlen(s);
	int num = a_to_i(s,n);
	printf("ATOI:%d\n",num);
	return 0;
}
