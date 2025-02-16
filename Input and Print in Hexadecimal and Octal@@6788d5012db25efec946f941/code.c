#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    printf("Hexadecimal: %X\n", num); // %X for uppercase hexadecimal
    printf("Octal: %o\n", num);       // %o for octal representation
    return 0;
}
