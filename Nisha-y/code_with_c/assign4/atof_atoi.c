#include <stdio.h>

int myAtoi(const char *str) {
    int result = 0;
    int sign = 1;
    int i = 0;

    // Handle leading white spaces
    while (str[i] == ' ')
        i++;

    // Handle sign
    if (str[i] == '-' || str[i] == '+') {
        sign = (str[i++] == '-') ? -1 : 1;
    }

    // Convert digits to integer
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return sign * result;
}

float myAtof(const char *str) {
    float result = 0.0f;
    float sign = 1.0f;
    float decimal = 0.1f; // For handling decimal part
    int i = 0;

    // Handle leading white spaces
    while (str[i] == ' ')
        i++;

    // Handle sign
    if (str[i] == '-' || str[i] == '+') {
        sign = (str[i++] == '-') ? -1.0f : 1.0f;
    }

    // Convert digits before decimal point to float
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10.0f + (str[i] - '0');
        i++;
    }

    // Check for decimal point
    if (str[i] == '.') {
        i++;

        // Convert digits after decimal point to float
        while (str[i] >= '0' && str[i] <= '9') {
            result = result + (str[i] - '0') * decimal;
            decimal /= 10.0f;
            i++;
        }
    }

    return sign * result;
}

int main() {
    const char *str1 = "12345";
    const char *str2 = "-987.654";

    int intResult = myAtoi(str1);
    float floatResult = myAtof(str2);

    printf("String '%s' converted to integer: %d\n", str1, intResult);
    printf("String '%s' converted to float: %.3f\n", str2, floatResult);

    return 0;
}

