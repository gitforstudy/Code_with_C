#include <stdio.h>
#include <string.h>

int to_int(char str[])
{
    	int digit = 1;//initializing digit to 1
    	int i = 0;//i for indexing
	if(str[i] == '-') {//check if is negative number
		i = 1;
	}
    	while(str[i] != '\0') {//check if is end of string
            	if(!(str[i] >= '0' && str[i] <= '9')) {//check if the value is digit or not
                	digit = 0;//digit to 0
                	break;//break
        	}
        	i++;
    	}
    	return digit;
}

int main(void) {
	char str[20];
    	printf("Enter the string: ");
    	scanf("%s", str);
    	if(to_int(str)){//if true
        	printf("%s\n", str);//prints the digits
    	} else {
        	printf("0\n");//if not digit print 0
    	}
    
}
