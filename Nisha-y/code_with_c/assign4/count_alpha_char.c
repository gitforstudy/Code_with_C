#include <stdio.h>
#include <ctype.h>

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    int alphabets = 0, numerics = 0, specials = 0;
    int i = 0;

    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin); // Allowing spaces in the input string

    while (str[i] != '\0') {
        if (isalpha(str[i])) // Check if the character is an alphabet
            alphabets++;
        else if (isdigit(str[i])) // Check if the character is a digit
            numerics++;
        else if (str[i] != ' ' && str[i] != '\n') // Check if the character is neither alphabet nor digit (special character)
            specials++;
        
        i++;
    }

    printf("Number of alphabets: %d\n", alphabets);
    printf("Number of numeric characters: %d\n", numerics);
    printf("Number of special characters: %d\n", specials);

    return 0;
}

