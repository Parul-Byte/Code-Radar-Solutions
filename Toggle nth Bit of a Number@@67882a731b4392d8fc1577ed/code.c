#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num, n;
    scanf("%d %d", &num, &n);
    
    // Create a mask with 1 at the nth position
    int mask = 1 << n;
    
    // Toggle the nth bit by performing bitwise XOR with the mask
    num = num ^ mask;
    
    printf("%d\n", num); 
    return 0;
}