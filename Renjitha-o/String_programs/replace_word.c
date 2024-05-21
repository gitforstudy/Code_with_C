//program to replace a word by another word using 2d array

#include <stdio.h>
#include <string.h>

void replace(char str[],char sub[],char nstr[])
{
	int strLen,subLen,nstrLen;
	int i = 0,j,k;
	int flag = 0,start,end;
	strLen = strlen(str);
	subLen = strlen(sub);
	nstrLen = strlen(nstr);
	for(i = 0; i < strLen; i++) {
		flag = 0;
		start = i;
		for(j =0; str[i] == sub[j]; j++,i++) {
			if(j == subLen-1) {
				flag = 1;
			}
		}
		end = i;
		if(flag == 0) {
			i -= j;
		}else {
			for(j = start; j < end; j++) {
				for(k = start; k < strLen; k++) {
					str[k] = str[k+1];
					strLen--;
					i--;
				}
			}
			for(j = start; j < start + nstrLen; j++) {
				for(k = strLen; k >= j; k--){
					str[k+1] = str[k];
				}
				str[j] = nstr[j-start];
				strLen++;
				i++;
			}
		}
	}
}

int main(void)
{
	char str[20],sub[20],new_str[50];
	printf("Enter a string: ");
	scanf("%[^\n]s",str);
	printf("Enter the substring to be removed: ");
	scanf("%s",sub);
	printf("Enter the new substring: ");
	scanf("%s",new_str);
	replace(str,sub,new_str);
	printf("The new string: %s",str);
	return 0;
}
