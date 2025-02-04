#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);  // Read two space-separated integers
    if (a == b) {  // Check if the two numbers are equal
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}