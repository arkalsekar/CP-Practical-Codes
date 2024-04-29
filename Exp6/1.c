// Factorial using Recursion 
#include <stdio.h>

int factorial(int n) {
    if (n >= 1) {
        return n * factorial(n-1);
    }
    return 1;
}

void main () {
    int n, fact;
    printf("Enter A Number \n");
    scanf("%d", &n);

    fact = factorial(n);
    printf("The Factorial for %d is %d", n, fact);
}   