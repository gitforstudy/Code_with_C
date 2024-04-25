#include <stdio.h>
int subset(int a[], int b[], int m, int n);

int main(void)
{
	int a[10], b[10], m, n, i, j, issubset;
    	printf("Enter the size of two arrays: ");
    	scanf("%d %d", &m, &n);
    	printf("Enter 1st Array: ");
    	for(i = 0; i < m; i++) {
        	scanf("%d", &a[i]);
    	}
    	printf("Enter 2st Array: ");
    	for(j = 0; j < n; j++) {
        	scanf("%d", &b[j]);
    	}
    	issubset =subset(a, b, m, n);
    	if(issubset) {
        	printf("subset\n");
    	} else {
        	printf("not subset\n");
    	}
    	return 0;
}
    
int subset(int a[], int b[], int m, int n){
    	int flag;
    	for(int i = 0; i < n; i++) {
        	flag = 0;
        	for(int j = 0; j < m ; j++) {
            		if(b[i] == a[j]) {
                		flag = 1;
                		break;
            		} 
            
        	}
        	if (!flag) {
            		return 0;
        	}
    	}
    	return 1;
}
