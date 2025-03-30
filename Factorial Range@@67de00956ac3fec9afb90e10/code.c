#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n > 0) {  // Base condition check
        return n * factorial(n - 1);  // Recursive call
    } else {
        return 1;  // Base case: factorial(0) = 1
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\\n");
    } else {
        printf("Factorial of %d is %d\\n", num, factorial(num));
    }

    return 0;
}
