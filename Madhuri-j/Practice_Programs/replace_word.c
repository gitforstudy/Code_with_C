#include <stdio.h>
#include <string.h>
 
 void replace_string(char str[], const char sub[], const char replace[]) {
         int subLen = strlen(sub);
         int replaceLen = strlen(replace);
         int strLen = strlen(str);
         char result[100];
         int i, j, k;
         for (i = 0, j = 0; i <= strLen - subLen; ) {
                  if (strncmp(&str[i], sub, subLen) == 0) {
                         for (k = 0; k < replaceLen; k++) {
                                 result[j++] = replace[k];
                         }
                         i += subLen;
                  } else {
                         result[j++] = str[i++];
                 }
         }
         while (i < strLen) {
                  result[j++] = str[i++];
          }
         result[j] = '\0';
         strcpy(str, result); 
 }
 
 int main(void) {
 	char str[20]; 
        char substr[10]; 
        char replace[10]; 

        printf("Enter a string: ");
	scanf("%[^\n]s", str);
 
        printf("Enter the substring to replace: ");
	scanf("%s", substr);
 
        printf("Enter the replacement: ");
	scanf("%s", replace);
 
        replace_string(str, substr, replace);
 
        printf("Result: %s\n", str);
 
        return 0;
}
