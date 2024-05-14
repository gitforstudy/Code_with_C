#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
    FILE *fp, *fp1;
    char ch;
    char str[10];
    printf("Enter the substring: ");
    scanf("%s", str);
    fp = fopen(argv[1], "r");
    if(fp == NULL) {
        printf("No sufficient for memory");
        exit(0);
    }
    rewind(fp);
    ch = fgetc(fp);
    int j = 0;
    while(ch != EOF) {
        
        for(int i = 0; i != EOF; i++) {
            while(j < strlen(str)) {
                if(ch == str[j]) {
                    printf("String found at index: %d\n", i);
                    j++;
                } else if(ch != str[j]) {
                    break;
                }
                
            }
            ch = fgetc(fp);
        }
	//return 0;
	//exit(0);
    }
    //printf("substring not found\n");
    
    return 0;
}

