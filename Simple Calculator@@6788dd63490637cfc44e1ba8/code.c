#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    // Input two numbers and the operator
    scanf("%d %c %d", &num1, &operator, &num2);

    // Perform the calculation based on the operator
    switch(operator) {
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
            if (num2 != 0)
                printf("%f\n", (float)num1 / num2);
            else
                printf("Error\n");
            break;
        default:
            printf("Error\n");
    }

    return 0;
}
