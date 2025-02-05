#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    scanf("%c", &ch);
    
    if (isdigit(ch))
        printf("Digit\n");
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("Vowel\n");
    else if (isalpha(ch))
        printf("Consonant\n");
    else
        printf("Special Character\n");
    
    return 0;
}
