#include <stdio.h>

int countTrailingZeros(int num) {
    int count = 0;
    
    // Keep dividing the number by 2 until it becomes odd
    while (num % 2 == 0 && num != 0) {
        count++;
        num >>= 1;  // Right shift the number by 1
    }
    
    return count;
}

int main() {
    int num;
    scanf("%d", &num);
    
    // Call the function to count trailing zeros
    int result = countTrailingZeros(num);
    
    printf("%d\n", result);  // Output the count of trailing zeros
    
    return 0;
}
