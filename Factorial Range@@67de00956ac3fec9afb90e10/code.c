#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, next;
    
    if (n <= 0) {
        printf("Invalid input\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        printf("%d", a);
        if (i < n - 1) printf(" "); // Space separation
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int n;

    // Read the number of terms
    scanf("%d", &n);

    // Generate and print Fibonacci series
    fibonacci(n);

    return 0;
}