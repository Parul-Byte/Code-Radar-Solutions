#include <stdio.h>

int main() {
    char name[100], hobby[100];
    int age;
    
    scanf("%s %d %s", name, &age, hobby);  // Read name, age, and hobby
    printf("Name: %s\n", name);             // Print name
    printf("Age: %d\n", age);               // Print age
    printf("Hobby: %s\n", hobby);           // Print hobby
    
    return 0;
}