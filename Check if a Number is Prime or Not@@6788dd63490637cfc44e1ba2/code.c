#include <stdio.h>

int main() {
    int num, i;
    int isPrime = 1;

    // Input the number
    scanf("%d", &num);

    // Prime number condition: must be greater than 1
    if (num <= 1) {
        isPrime = 0;
    }

    // Check divisibility
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}
