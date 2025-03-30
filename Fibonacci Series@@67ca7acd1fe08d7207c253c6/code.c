#include <stdio.h>
void fib(int n) {
    int a=0, b=1;
    while(n--){
    printf("%d ", a);
        b+=a;
        a=b-a;
    }
    printf("\n");}


int main() {
    int n;
    scanf("%d", &n);
    if (n > 0) fib(n);
    else printf("Invalid Input");
    return 0;
}

