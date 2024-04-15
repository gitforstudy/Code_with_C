#include <stdio.h>
int main(void)
{	
	int a = 10;
	printf("int a = 10, Here  is assignment operator");
	printf("int a += 10, Here  a = a+ 10 = %d\n", a = a+ 10);
	printf("int a -= 10, Here  a = a- 10 = %d\n", a = a- 10);
	printf("int a *= 10, Here  a = a* 10 = %d\n", a = a* 10);
	printf("int a /= 10, Here  a = a/ 10 = %d\n", a = a/ 10);
	printf("int a += 10, Here  a = a%% 10 = %d\n", a = a% 10);
	printf("int a += 10, Here  a = a<< 10 = %d\n", a = a<< 10);
	printf("int a += 10, Here  a = a>> 10 = %d\n", a = a>> 10);
	printf("int a += 10, Here  a = a& 10 = %d\n", a = a& 10);
	printf("int a += 10, Here  a = a^ 10 = %d\n", a = a^ 10);
	printf("int a += 10, Here  a = a| 10 = %d\n", a = a| 10);
	return 0;
}

