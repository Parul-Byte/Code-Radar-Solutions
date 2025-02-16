#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);  // Read three integers
    double average = (a + b + c) / 3.0;  // Calculate average (use 3.0 to ensure float division)
    printf("Average: %.2lf", average);  // Print the average with 2 decimal places
    return 0;
}
