#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d", &a);
    
    if (!(a > 0)) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}



















