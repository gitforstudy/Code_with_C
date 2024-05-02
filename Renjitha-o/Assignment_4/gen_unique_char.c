//program to generate 10 unique character

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int num;
	printf("MENU\n1.Alphabets\t2.Digits\t3.special characters\t4.exit\n");
	printf("which unique characters you want:\n");
	scanf("%d",&num);
	switch(num) {
		case 1:printf("10 unique alphabets:\n");
			static const char ucase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		       int ucase_count = sizeof(ucase) - 1;
		       int i, j;
		       for(i = 0; i < 10; i++){
			       char random_char;
			       int random_index = rand() % ucase_count;
			       random_char = ucase[random_index];
			       printf("%c", random_char);
			       printf("\t");
		       }
		       printf("\n");
		       break;
		case 2:printf("10 unique digits:\n");
		       int low,upper;
		       printf("enter the range:\n");
		       scanf("%d %d",&low,&upper);
		       for (int i = 0; i < 10; i++) {
			       int value = rand() % (upper - low + 1)+ low;
			       printf("%d ", value);
		       }printf("\n");
		       break;
		case 3:printf("10 special characters");
		       break;
		default:printf("wrong option");
			break;
	}

    return 0;
}
