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
    printf("");
    scanf("%d", &n);
    
    int position = getLowestSetBitPosition(n);
    
    if (position != -1) {
        printf("%d\n", position);
    } else {
        printf("\n");
    }
    
    return 0;
}