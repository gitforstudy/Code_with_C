//program to find strchr,strstr,strrstr,strcmp

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
/*char *str_chr(char *str,char c) {
	int i = 0,k = 0;
	int len = strlen(str);
	char str1[len];
	char *ptr = str1;;
	while(*(str + i) != '\0') {
		if(*(str + i) == 'c') {
			while(*(str + i) != '\0'){
				str1[k] =  *(str + i);
				k++;
			}
		}
	}
	return ptr;
}*/

/*char *str_str(char *str,char *str1) {
	int i = 0,j,count = 0,k = 0;
	int len = strlen(str);
	char src[len];
	char *ptr = src;
	while(*(str +i) != '\0') {
		for(j = 0; *(str1 + j) != '\0';j++) {
			if(*(str +i) == *(str1 +j)){
				src[k] = *(str +i);
				k++;
			}
		}
		i++;
		while(*(str + i) != '\0') {
               		src[k] = *(str +i);
                	k++;
                	i++;
        	}
	}
	//src[k] = '\0';
	printf("%s",src);
	return ptr;
}*/

char *str_rstr(char *str,char *str1) {
        int i = strlen(str),j,count = 0,k = 0;
        int len = strlen(str);
        char src[len];
        char *ptr = src;
        while(*(str +i) != '\0') {
                for(j = 0; *(str1 + j) != '\0';j++) {
                        if(*(str +i) == *(str1 +j)){
                                src[k] = *(str +i);
                                k++;
                        }
                }
                i--;
                while(*(str + i) != '\0') {
                        src[k] = *(str +i);
                        k++;
                        i++;
                }
        }
        //src[k] = '\0';
        printf("%s",src);
        return ptr;
}

/*char *strlwr(char *s) {
	char *ptr = s;
	int i;
	for(i = 0; *(s + i) != '\0';i++) {
		if((*(s + i) >= 'A') && (*(s + i) <= 'Z')) {
			*(s + i) += 32;
		}
	}
	return ptr;
}
int str_cmp(char *s,char *d) {

	char *s1 = strlwr(s);
	char *s2 = strlwr(d);	
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int flag = 0;
	printf("length1 :%d\t Length2 :%d\n",len1,len2);
	if (len1 == len2) {
		for(int k = 0; *(s1+k) != '\0' && *(s2+k) != '\0';k++){
			if (*(s1+k) != *(s2+k)) {
				flag = 1;
			}
		}
		if(!flag) {
			return 0;
			exit(0);
		}
	} else if(len1 > len2) {
		return 1;
	}else if (len1 < len2) {
		return -1;
	}
}*/
int main(void)
{
	char str[15],str2[10],c;//*str1;
	//int str1;
	char *str1;
	printf("enter the string:\n");
	scanf("%s",str);
	printf("enter the string to search:\n");
	scanf(" %s",str2);
	str1 = str_rstr(str,str2);
	/*if(str1 < 0) {
		printf("string comparison:%d -> strings are not equal",str1);
	} else if(str1 == 0) {
		printf("same string");
	}else {
		printf("strings are not equal");
	}*/
	printf("FIRST OCCURENCE OF THE CHARACTER:%s\n",str1);
	return 0;
}

