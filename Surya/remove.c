#include<stdio.h>
  int main()
  {

  int a[8] = { 1,2,2,3,4,4,5,6};

  int s = sizeof(a)/sizeof(a[0]);
  

   for(int i=0; i<=s; i++){
    int count =0;
    for(int j=0; j<s; j++){
        
        if (a[i] == a[j])
        {
            count++;
        }
   
     }
     if (count == 1)
    {
          printf("%d\n",a[i]);
    }
        
    
  }
  return 0;

  }
