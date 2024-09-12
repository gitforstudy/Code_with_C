// program for a calculator fo int and float numbers:
#include <stdio.h>
int main(void) {
	int data_type;
	printf("for which number you need to calcultion\n 1. INT\t 2.FLOAT\n");
	scanf("%d",&data_type);
	switch(data_type) {
		case 1:printf("enter the numbers:\n");
		       int n1,n2,operator,res = 0;
		       scanf("%d %d",&n1,&n2);
		       printf("enter the operation u want to do\n 1.ADD\t2.SUB\t3.MUL\t4.DIV\n");
		       scanf("%d",&operator);
		       switch(operator){
			       case 1:res = n1 + n2;// add two numbers
					printf (" Addition of %d and %d is: %d", n1, n2, res);
				 	break;
				case 2: res = n1 - n2; // subtract two numbers
					printf (" Subtraction of %d and %d is: %d", n1, n2, res);
					break;
				case 3: res = n1 * n2; // multiply two numbers
					printf (" Multiplication of %d and %d is: %d", n1, n2, res);
					break;
				case 4:if (n2 == 0){// division by zero not allowed
					       printf (" \n Divisor cannot be zero. Please enter another value ");
					       scanf ("%d", &n2);//take another divisor
				       }
				       res = n1 / n2;
				       printf (" Division of %d and %d is: %d", n1, n2, res);
				       break;
				default:printf (" Something is wrong!! Please check the options");
					break;
		       }
		       break;
		case 2:printf("enter the numbers:");
		       float f1,f2,result = 0;
		       scanf("%f %f",&f1,&f2);
		       int operator1;
		       printf("enter the operation u want to do\n 1.ADD\t2.SUB\t3.MUL\t4.DIV\n");
		       scanf("%d",&operator1);
		       switch(operator1){
			       case 1:result = f1 + f2;
				      printf (" Addition of %f and %f is: %.2f", f1, f2, result);
				      break;
			       case 2: result = f1 - f2;
				       printf (" Subtraction of %f and %f is: %.2f", f1, f2, result);
				       break;
			       case 3: result = f1 * f2;
				       printf (" Multiplication of %f and %f is: %.2f", f1, f2, result);
				       break;
			       case 4: if (f2 == 0){
					       printf (" \n Divisor cannot be zero. Please enter another value ");
					       scanf ("%f", &f2);//take another divisor
					}
				       result = f1 / f2;
				       printf (" Division of %f and %f is: %.2f", f1, f2, result);
				       break;
			       default:printf (" Something is wrong!! Please check the options");
				       break;
		       }
	}
}
