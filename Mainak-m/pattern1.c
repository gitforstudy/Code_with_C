#include <stdio.h> 
  
int main() 
{ 
    int rows = 5; 
  
    // first loop for printing rows 
    for (int i = 0; i < rows; i++) { 
  
        // second loop for printing character in each rows 
        for (int j = 0; j <= i; j++) 
        { 
            printf("*"); 
        } 
        printf("\n"); 
    } 
    return 0; 
}
























// #include <stdio.h>
// #include <stdlib.h> // For atoi function

// int main(int argc, char *argv[]) 
// {
//     if (argc != 2) {
//         printf("Usage: %s <number_of_rows>\n", argv[0]);
//         return 1;
//     }
    
//     int rows = atoi(argv[1]); // Convert string argument to integer
    
//     // Validation check for rows
//     if (rows <= 0) {
//         printf("Number of rows must be a positive integer.\n");
//         return 1;
//     }

//     // Loop for printing rows 
//     for (int i = 0; i < rows; i++) { 
//         // Loop for printing characters in each row 
//         for (int j = 0; j <= i; j++) { 
//             printf("*"); 
//         } 
//         printf("\n"); 
//     } 
//     return 0; 
// }
