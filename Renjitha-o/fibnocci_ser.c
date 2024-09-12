//to print fibnocci series till the range

#include <stdio.h>
int main(void){
    int a = 0, b = 1,c;
    int num;
    printf("enter the range:");
    scanf("%d",&num);
    if (num < 0) {
    	printf("can't execute,run again and give +ve num");
    } else {
	    printf("%d %d", a,b);
	    while(num > 0){// to print fibnocci series add previous 2numbers and store into next variable repeat till the range given by user
		    c = a + b;
		    a = b;
		    b = c;
		    printf("%d\t",c);
		    num--;
	    }
	    return 0;

}
