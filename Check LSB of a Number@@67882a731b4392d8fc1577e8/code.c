#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num;
    scanf("%d", &num);
    
    if (num & 1) {
        printf("Set\n");  // If LSB is 1
    } else {
        printf("Not Set\n");  // If LSB is 0
    }
    return 0;
}