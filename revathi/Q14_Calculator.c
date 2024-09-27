/*WAP to create functional calculator which can accept input integers,float,+,-,*,/,%.*/

#include <stdio.h>

int main() {
    char op, choice = 'y'; // Variables to store operator and user's choice to continue or not
    int a, b; // Variables to store operands

    while (choice != 'n' && choice != 'N') {
        printf("Enter the operator (+, -, *, /, %%): ");
        getchar(); // Clear input buffer
        scanf("%c", &op);

        printf("Enter the a and b values: ");
        scanf("%d %d", &a, &b);

        // Perform operation based on operator
        switch (op) {
            case '+':
                printf("%d + %d = %d\n", a, b, a + b);
                break;
            case '-':
                printf("%d - %d = %d\n", a, b, a - b);
                break;
            case '*':
                printf("%d * %d = %d\n", a, b, a * b);
                break;
            case '/':
                // Check for division by zero
                if (b != 0)
                    printf("%d / %d = %d\n", a, b, a / b);
                else
                    printf("Error: Division by zero\n");
                break;
            case '%':
                // Check for modulo by zero
                if (b != 0)
                    printf("%d %% %d = %d\n", a, b, a % b);
                else
                    printf("Error: Modulo by zero\n");
                break;
            default:
                printf("Error: Invalid operator\n");
        }

        // Ask user if they want to continue
        printf("Do you want to continue? (Y/y for Yes, N/n for No): ");
        scanf(" %c", &choice); // Add space before %c to ignore leading whitespaces

        // Check if the choice is valid
        if (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N') {
            printf("Error: Invalid choice. Please enter Y/y or N/n.\n");
            break; // Exit loop if choice is invalid
        }
    }

    printf("Calculator stopped.\n");

    return 0;
}

