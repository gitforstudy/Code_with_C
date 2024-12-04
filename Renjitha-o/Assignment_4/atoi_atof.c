//program to implement atoi and atof functions

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int reverse_int(int num){
	int temp,rev = 0;
	while(num != 0) {
		temp = num % 10;
		rev = rev * 10 + temp;
		num /= 10;
	}
	return rev;
} 

int a_to_i(char *s) {
    if (*s == '\0') {
        return 0; // Base case: end of string
    }
    //len = strlen(s);
    int num1 = *s - '0'; // Convert the current character to integer

    if (isdigit(*s)) {
	    //len--;
    	    return num1 + 10 * a_to_i(s + 1); // Recursively process the rest of the string
    } else {
	    return 0; // other than digit, return 0
    }
}
/*int a_to_i(char *s,int n){
	int size = n;
	n = 0;
	int num1 = s[n] - '0';
	int i = 0;
	while(n < size){
		if(isdigit(s[n - 1])) {
			n++;
			return num1 * 10 + a_to_i(s,n);
	
		}else {
			return 0;
		}
		i++;
	}
//	return a_to_i(s,n);
}*/
int main(void)
{
	char s[] = "12345";
	int n = strlen(s);
	int num = a_to_i(s);
	int num1 = reverse_int(num);
	printf("ATOI:%d\n",num1);
	return 0;
}
