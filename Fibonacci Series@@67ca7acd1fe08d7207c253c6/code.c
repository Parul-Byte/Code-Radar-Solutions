#include <stdio.h>

void fib(int a, int b, int n) {
    if (n <= 0) return;
    printf("%d ", a);
    fib(b, a + b, n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    if (n > 0) fib(0, 1, n);
    return 0;
}

