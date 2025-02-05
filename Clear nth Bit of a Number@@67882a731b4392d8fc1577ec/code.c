#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num, n;
    scanf("%d %d", &num, &n);
    
    // Create a mask with all bits set to 1 except for the nth bit
    int mask = ~(1 << n);
    
    // Clear the nth bit by performing bitwise AND with the mask
    num = num & mask;
    
    printf("%d\n", num);
    return 0;
}