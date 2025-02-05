#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    // If the number is 0, there are no set bits
    if (num == 0) {
        printf("No set bit\n");
    } else {
        // Use the expression (num & -num) to isolate the lowest set bit
        int position = 1;
        
        // Find the position of the lowest set bit
        while (!(num & 1)) {
            num >>= 1;
            position++;
        }
        
        printf("%d\n", position);  // Output the position of the lowest set bit
    }
    
    return 0;
}
