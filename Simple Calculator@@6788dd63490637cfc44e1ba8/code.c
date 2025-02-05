#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    scanf("%d %c %d", &num1, &operator, &num2);

    if (operator == '+') {
        printf("%d\n", num1 + num2);
    } else if (operator == '-') {
        printf("%d\n", num1 - num2);
    } else if (operator == '*') {
        printf("%d\n", num1 * num2);
    } else if (operator == '/') {
        if (num2 != 0) {
            printf("%d\n", num1 / num2);
        } else {
            printf("Error\n");
        }
    } else {
        printf("Error\n");
    }

    return 0;
}
