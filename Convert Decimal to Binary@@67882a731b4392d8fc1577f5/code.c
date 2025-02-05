#include <stdio.h>

void decimalToBinary(int num) {
    // Start from the most significant bit (31st bit) for a 32-bit number
    for (int i = 31; i >= 0; i--) {
        // Check if the ith bit is set (1) or not (0)
        int bit = (num >> i) & 1;
        // Print the bit (either 0 or 1)
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    int num;
    scanf("%d", &num);
    
    // Call the function to print the binary representation
    decimalToBinary(num);
    
    return 0;
}
