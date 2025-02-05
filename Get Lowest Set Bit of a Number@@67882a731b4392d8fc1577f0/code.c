#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num;
    scanf("%d", &num);
    
    // Find the position of the lowest set bit
    int position = 1;
    
    // Check if num is 0 (since no set bit exists in 0)
    if (num == 0) {
        printf("No set bit\n");
    } else {
        while (!(num & 1)) {
            num >>= 1;  // Right shift the number
            position++;
        }
        printf("%d\n", position);  // Output the position of the lowest set bit
    }
    return 0;
}