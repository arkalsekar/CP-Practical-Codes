// Largest of Three
#include <stdio.h> 
void main () {
    int n1, n2, n3, largest;

    printf("Enter Number 1 \n");
    scanf("%d", &n1);
    
    printf("Enter Number 2 \n");
    scanf("%d", &n2);
    
    printf("Enter Number 3 \n");
    scanf("%d", &n3);

    if (n1 > n2 && n1 > n3)
    {
        largest = n1;
    }
    else if (n2 > n1 && n2 > n3)
    {
        largest = n2;
    }
    else {
        largest = n3;
    }

    printf("The Largest Number is %d \n", largest);

}