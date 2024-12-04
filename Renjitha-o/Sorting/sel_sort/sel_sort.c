#include<stdio.h>
#include<stdlib.h>
#include"sel_sort.h"


void sel_sort(int arr[],int n)
{
	int min,temp;
	for(int i =0; i < n -1 ; i++) {
		min = i;
		for(int j = i + 1; j < n ;j++){
			if(arr[j] < arr[min]) {
				min = j;
			} 
		}	
		if(min != i) {
				temp = arr[min];
				arr[min] = arr[i];
				arr[i] = temp;
			}	
		}
	/* for(int i = 0; i < n ;i++) {
			 printf("%d",arr[i]);
	 }*/
	
}
