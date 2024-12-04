#include <stdio.h>
#include <string.h>

void replace_word(char str[], char sstr[])
{
	int j = 0, i, k = 0, diff = 0;
    	char new_str[10];
	printf("Enter the new string to replace: ");
        scanf("%s", new_str);
    	int len1 = strlen(str);
    	int len2 = strlen(sstr);
    	int len3 = strlen(new_str);
    	for(i = 0; i < strlen(str); i++) {
       		if(len2 < len3) {
             		if(str[i] == sstr[j]) {
                		diff = len3 - len2;
                		len1 = len1 + diff;
                		i = len1;
                		while(i > len3+1) {
                    			str[i] = str[i - diff];
                    			i--;
                		}
                		for(i = 0; i < strlen(str); i++) {
                    			j = 0;
                    			if(str[i] == sstr[j]) {
                        			while(k < len3) {
                            				str[i] = new_str[k];
                            				i++;
                            				k++;
                        			}
                    			}
                		}
            		}
        	}else if(len3 == len2) {
            		if(str[i] == sstr[j]) {
                		str[i] = new_str[k];
                		k++;
                		j++;
            		}
        	}else if(len2 > len3) {
                	diff = len2 - len3;
                	k = 0;
                	if(str[i] == sstr[j]) {
                    		while(k < len3) {
                        		str[i] = new_str[k];
                        		i++;
                        		k++;
                    		}
                    		for(; i < len1; i++) {
                        		str[i] = str[i+diff];
                    		}
                	}
                	len1 = len1 - diff;
            	} 
        }
        printf("String after replace: %s\n",str);
}
   


int main(void) {
    	char str[20], sstr[10];
    	printf("Enter the string: ");
    	scanf("%[^\n]s", str);
    	printf("Enter the substring: ");
    	scanf("%s", sstr);
    	printf("Original String: %s\n", str);
   	replace_word(str, sstr);
    	return 0;
}





