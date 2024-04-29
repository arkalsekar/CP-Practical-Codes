// Upper and Lower Triangle
#include <stdio.h>
void main () {
    int n;
    
    printf("Enter the Number of Lines \n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
        printf("*");
        }
        printf("\n");
    }
    
}