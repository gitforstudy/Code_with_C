#include <stdio.h>
void toggle(int);

void toggle(int num)
{
	int pos;
    	printf("Before toggling the bits:\n");
    	
    	for(pos=31;pos>=0;pos--)
    		printf("%d",(num>>pos)&1);
    	
    	printf("\n"); 
    	
    	for(pos=32;pos>=1;pos--)
    	{
        	if(pos%2==0)
            		num=num^1<<pos;
    	}
    	printf("After toggling the bits\n");
    	
    	for(pos=31;pos>=0;pos--)
    		printf("%d",num>>pos&1);
}

int main()
{
   	int num;
   	printf("Enter the number you want to toggle\n");
   	scanf("%d",&num);
   	toggle(num);    
}

