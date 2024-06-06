//program to implement stack using queue

#include<stdio.h>
#include<stdlib.h>

int size,choice = 1,data,i;
/*printf("enter the size:\n");
scanf("%d",&size);
int arr[size];*/
int front = -1,rear = 0;

int main(void)
{
	//int size,choice = 1,data,i;
	printf("enter the size:\n");
	scanf("%d",&size);
	int arr[size];
	//int front = -1,rear = -1;
	while(choice != 0 && choice < 4) {
		printf("MENU\n1.PUSH\t2.POP\t3.Display\n");
		printf("enter the choice:\n");
		scanf("%d",&choice);
		switch(choice) {
			case 1:printf("push data\n");
			       printf("enter the data:\n");
			       scanf("%d",&data);
			       if(rear >= size-1){
				       printf("overflow\n");
			       }else {
				    if(front == -1 && rear == 0) {
			       		front = front + 1;
					//rear = rear + 1;
					arr[rear] = data;
					//printf("overflow");
				    }else {
				       front = front + 1;
				       for(i = front;i <= size; i++){
					       arr[i + 1] = arr[i];
				       }
				       //front = i;
			       		arr[rear] = data;
				    }
			       }
			       //front++;
			       break;
			case 2:printf("deleteing data\n");
			       if(front == -1 || front > rear) {
			       		printf("underflow\n");
			       }else {
					printf("element deleted:%d\n",rear);
					rear = rear + 1;
			       }
			       break;
			case 3:printf("display\n");
			       printf("%d\n",front);
			       for(i = rear; i <= size-1; i++){
			       		printf("%d\t",arr[i]);
			       }
			       printf("\n");
			       break;
			default:printf("enter correct option!!!\n");
				break;
		}
	}
	return 0;
}
