#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num;
    scanf("%d", &num);
    
    // Check if the MSB is set (32-bit integer: MSB is at the 31st position, which is 1 << 31)
    if (num & (1 << 31)) {
        printf("Set\n");  // If MSB is 1
    } else {
        printf("Not Set\n");  // If MSB is 0
    }
    return 0;
}