#include <stdio.h>
#include <string.h>
#include <ctype.h> // yeh header file add karo

int main() {
    char ch;
    scanf("%c", &ch);

    if (isdigit(ch))
        printf("Digit\n");
    else if (strchr("aeiouAEIOU", ch))
        printf("Vowel\n");
    else if (isalpha(ch))
        printf("Consonant\n");
    else
        printf("Special Character\n");

    return 0;
}
 



