// Swapping of Numbers by Call by Reference 
#include <stdio.h>
void swap (int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void main () {
    int n1, n2;
    printf("Enter Number 1 \n");
    scanf("%d", &n1);

    printf("Enter Number 2 \n");
    scanf("%d", &n2);

    printf("Before Swapping \nNumber 1 : %d\nNumber 2 : %d\n", n1, n2);
    
    swap(&n1, &n2);

    printf("After Swapping \nNumber 1 : %d\nNumber 2 : %d\n", n1, n2);
}