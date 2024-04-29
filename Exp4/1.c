#include <stdio.h>
void main () {
    int n;
    printf("Enter the size of the array \n");
    scanf("%d", &n);
    
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter Number for %d : ", i);
        scanf("%d", &arr[i]);
    }
    
    for (int j = 0; j < n; j++)
    {
        printf("The Element at %d is %d \n", j, arr[j]);
    }
    
}