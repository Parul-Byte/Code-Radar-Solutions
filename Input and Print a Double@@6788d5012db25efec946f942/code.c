#include <stdio.h>

int main() {
    double num;
    scanf("%lf", &num);  // %lf for reading double-precision numbers
    printf("You entered: %.4lf\n", num);  // Printing with 4 decimal places
    return 0;
}
