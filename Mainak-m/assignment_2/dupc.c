#include <stdio.h>  
#include <conio.h>  
int main ()  
{  
    // declare local variables   
    int arr[20], i, j, k, size;  
      
    printf (" take the size of an array: ");  
    scanf (" %d", &size);  
      
    printf (" \n Enter %d elements of an array: \n ", size);  
    //take the array elements from the users
    for ( i = 0; i < size; i++)  
    {  
        scanf (" %d", &arr[i]);  
    }  
      
      
    // To find the duplicate elements in array  
    for ( i = 0; i < size; i ++)  
    {  
        for ( j = i + 1; j < size; j++)  
        {  
            // use if statement to check duplicate element  
            if ( arr[i] == arr[j])  
            {  
                // delete the current position of the duplicate element  
                for ( k = j; k < size - 1; k++)  
                {  
                    arr[k] = arr [k + 1];  
                }  
                // decrease the size of array after removing duplicate element  
                size--;  
            }  
        }  
    }  
      
      
    /* To dispaly the duplicate array elements */  
    printf (" \n after deletion of the duplicate number: ");  
      
    // for loop to print the array  
    for ( i = 0; i < size; i++)  
    {  
        printf (" %d \t", arr[i]);  
    }  
    return 0;  
} 