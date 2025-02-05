#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num, n;
    scanf("%d %d", &num, &n);
    
    // Use bitwise right shift and bitwise AND to get the nth bit
    if (num & (1 << n)) {
        printf("1\n");  // If nth bit is 1
    } else {
        printf("0\n");  // If nth bit is 0
    }
    return 0;
}