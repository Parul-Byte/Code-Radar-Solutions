#include <stdio.h>

int getLowestSetBitPosition(int n) {
    if (n == 0) {
        return -1; // No set bit found
    }
    
    // Isolate the lowest set bit
    int lowestSetBit = n & -n;
    
    // Find the position of the lowest set bit
    int position = 0;
    while (lowestSetBit >>= 1) {
        position++;
    }
    
    return position;
}

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    int position = getLowestSetBitPosition(n);
    
    if (position != -1) {
        printf("The position of the lowest set bit is: %d\n", position);
    } else {
        printf("No set bit found.\n");
    }
    
    return 0;
}