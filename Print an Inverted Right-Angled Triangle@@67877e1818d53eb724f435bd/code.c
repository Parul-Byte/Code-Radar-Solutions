#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Taking input

    for (int i = N; i >= 1; i--) { // Loop for rows
        for (int j = 1; j <= i; j++) { // Loop for columns
            printf("*");
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
