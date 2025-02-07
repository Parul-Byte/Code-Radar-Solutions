#include <stdio.h>

int main() {
    char ch;
    scanf(" %c", &ch);  // Space before %c to ignore any leading whitespace
    printf("You entered: %c\n", ch);
    return 0;
}