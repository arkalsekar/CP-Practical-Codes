// Largest of Three
#include <stdio.h>
void main()
{
    int n1, n2, choice, result;
    while (1)
    {
        printf("Enter 1 : Addition \n");
        printf("Enter 2 : Subtraction \n");
        printf("Enter 3 : Multiplication \n");
        printf("Enter 4 : Division \n");
        printf("Enter 5 : Exponential \n");

        printf("Enter your Choice Number \n");
        scanf("%d", &choice);

        printf("Enter Number 1 \n");
        scanf("%d", &n1);

        printf("Enter Number 2 \n");
        scanf("%d", &n2);

        switch (choice)
        {
        case 1:
            result = n1 + n2;
            break;
        case 2:
            result = n1 - n2;
            break;
        case 3:
            result = n1 * n2;
            break;
        case 4:
            result = n1 / n2;
            break;
        case 5:
            result = n1 ^ n2;
            break;
        default:
            printf("None of the Choice Selected");
            break;
        }

        printf("Result : %d \n", result);
    }
}