#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    // Flip all bits using bitwise NOT (~)
    int flipped = ~num;
    
    printf("%d\n", flipped);  // Output the flipped number
    
    return 0;
}
