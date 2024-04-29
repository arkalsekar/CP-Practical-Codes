// Fibonacci Series
#include <stdio.h>
void main () {
    int n, temp, nextTerm;
    int firstTerm = 0;
    int secondTerm = 1;
    // int nextTerm = firstTerm + secondTerm;
    
    printf("Enter the Number of the Digit \n");
    scanf("%d", &n);

    printf("%d %d ",firstTerm, secondTerm);
    for (int i = 0; i < n; i++)
    {
        nextTerm = firstTerm + secondTerm;
        temp = firstTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;

        printf("%d ", nextTerm);
    }
    

}