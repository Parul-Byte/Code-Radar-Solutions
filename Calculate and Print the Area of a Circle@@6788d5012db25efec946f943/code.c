#include <stdio.h>

#define PI 3.14  // Defining the value of pi

int main() {
    float radius, area;
    scanf("%f", &radius);  // Read the radius of the circle
    area = PI * radius * radius;  // Calculate the area
    printf("Area: %.2f\n", area);  // Print the area with 2 decimal places
    return 0;
}