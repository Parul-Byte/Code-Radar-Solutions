#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);  // Read two space-separated integers
    if (a >= b) {  // Check if the first number is greater than or equal to the second
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}