#include <stdio.h>

void decimalToBinary(int n) {
    if (n == 0) {
        printf("0");
        return;
    }

    // Determine the number of bits required to represent the number
    int numBits = sizeof(n) * 8; // Total bits in an integer
    int foundMSB = 0; // Flag to skip leading zeros

    // Iterate through each bit
    for (int i = numBits - 1; i >= 0; i--) {
        // Extract the i-th bit
        int bit = (n >> i) & 1;

        // Skip leading zeros
        if (bit == 1) {
            foundMSB = 1;
        }

        // Print the bit if it's part of the binary representation
        if (foundMSB || i == 0) {
            printf("%d", bit);
        }
    }
}

int main() {
    int n;
    printf("");
    scanf("%d", &n);

    printf("");
    decimalToBinary(n);
    printf("\n");

    return 0;
}