#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Taking input for the number of rows

    for (int i = 1; i <= N; i++) {  // Loop for rows
        for (int j = 1; j <= i; j++) {  // Loop for printing stars
            printf("* ");
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}