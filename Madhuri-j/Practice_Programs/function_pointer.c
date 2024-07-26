//c program for simple calculator program using function pointer
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int main(void)
{
    int a, b, ch;
    int (*fp[3])(int, int) = {add, sub, mul};
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("0.add\n1.sub\n2.mul\n");
    scanf("%d", &ch);
    printf("%d\n", (*fp[ch])(a, b));
    return 0;
    
}
