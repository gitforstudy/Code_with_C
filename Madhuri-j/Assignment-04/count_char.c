#include <stdio.h>
#include <string.h>
void check_char(char str[], int len);

int main(void)
{
	char str[20];
	int len;
	printf("Enter the string: ");
	scanf("%[^\n]%*c", str);
	len = strlen(str);
	check_char(str, len);

	return 0;
}

void check_char(char str[], int len)
{
	int i, spl_count = 0, alpha = 0, num_count = 0;
	for(i = 0; i < len; i++) {
		if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') {
			alpha = alpha + 1;
		} else if(str[i] >= '0' && str[i] <= '9') {
			num_count = num_count + 1;
		} else {
			spl_count = spl_count + 1;
		}
	}
	printf("Number of alphabets: %d\n", alpha);
	printf("Number of integers: %d\n", num_count);
	printf("Number of special characters: %d\n", spl_count);
}
