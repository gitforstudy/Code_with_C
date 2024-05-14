#include <stdio.h>
#include <string.h>

void strchar(char str[], char ch)
{
	int i;
        for(i = 0; i < strlen(str); i++) {
                if(str[i] == ch) {
                        printf("the %c is at index %d\n", ch, i);
                } 
        }

}

void stringstr(char str[])
{
        char str1[10];
        int i, j=0;
        printf("Enter the substring: ");
        scanf("%s", str1);
        for(i = 0; i < strlen(str); i++) {
            if(str[i] == str1[j]) {
                for(; j < strlen(str1); j++) {
                        
                        }
                        printf("The %s is found at %s in index %d\n", str1, str, i);
                }
                
        }
}

void strrstr(char str[])
{
        char str1[20];
        int i, j = 0, found = 0;
        printf("Enter the substring: ");
        scanf("%s", str1);
        for(i = strlen(str)-1; i > 0; i--) {
           while (j < strlen(str1) && str[i - j] == str1[(strlen(str1)) - 1 - j]) {
            j++;
        }
        if (j == (strlen(str1))) {
            int last_index = i - j + 1;
            printf("The substring %s found in %s at index %d\n", str1, str, last_index);
            found = 1;
            break; 
        }
    }
}

int stringcmp(char str[])
{
        char str1[20];
        int i, j;
        printf("Enter another string: ");
        scanf("%s", str1);
        for(i = 0; i < strlen(str); i++) {
                for(j = 0; j < strlen(str1); j++) {
                        if(str[i] != str1[j])
                                return 0;
                        else
                                return 1;
                }
        }
}

int main(void)
{
        char str[20];
        int operation;
        char ch;
        printf("Enter the character: ");
        scanf("%c",&ch);
        printf("Enter the string: ");
        scanf("%s", str);
        printf("Operations:\n");
        printf("1. strchar\n2. strstr\n3. strrstr\n4. strcmp\n");
        printf("Enter the operation to perform: ");
        scanf("%d", &operation);
        
        switch(operation) {
                case 1: strchar(str, ch);
                        break;

                case 2: stringstr(str);
                        break;

                case 3: strrstr(str);
                        break;

                case 4: if(stringcmp(str)) {
                                printf("Strings are same\n");
                        } else {
                                printf("Strings are not same\n");
                        }
                        break;

                default: printf("Invalid operation\n");
        }
        return 0;
}
