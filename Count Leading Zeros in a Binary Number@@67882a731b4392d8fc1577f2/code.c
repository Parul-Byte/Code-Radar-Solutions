#include <stdio.h>

int countLeadingZeros(int num) {
    int count = 0;
    // Iterate through the 32 bits of the number
    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1) {
            break;  // Stop counting once we encounter the first set bit
        }
        count++;
    }
    return count;
}

int main() {
    int num;
    scanf("%d", &num);
    
    // Call the function to count leading zeros
    int result = countLeadingZeros(num);
    
    printf("%d\n", result);  // Output the count of leading zeros
    
    return 0;
}
