#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    // Taking input: two integers and an operator
    printf("Enter two integers followed by an operator (+, -, *, /): ");
    if (scanf("%d %d %c", &num1, &num2, &op) != 3) {
        printf("Error: Invalid input format\n");
        return 1;
    }

    // Performing the operation
    switch (op) {
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero\n");
            } else {
                printf("%d\n", num1 / num2);
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}