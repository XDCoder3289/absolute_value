#include <stdio.h>
// to capture the variable as a string
#include <string.h>
int main() {
    char operator;
    char variable[2];
    int first, second;
    printf("Enter an operator (+, -): ");
    scanf("%c", &operator);
    printf("Enter the variable: \n");
    scanf("%s", &variable);
    printf("Enter two operands (one before equal and one after equal sign): ");
    scanf("%d %d", &first, &second);

    switch (operator) {
    case '+':
        printf("%s = %d and x = %d", variable, first + second, first - second);
        break;
    case '-':
        printf("%s = %d and x = %d", variable, first + second, first - second);
        break;
        // Absolute Value for simple calculations
    default:
        printf("Error! Difficult computation");
    }

    return 0;
}