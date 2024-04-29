#include <stdio.h>
#include <strings.h>

void main()
{
    char str1[] = "ABA";
    char str2[] = "ABC";
    char strCheck[500];

    strcpy(strCheck, str1);
    strrev(strCheck);

    if (strcmp(str1, strCheck) == 0)
    {
        printf("The String Entered is a palindrome \n");
    }
    else
    {
        printf("The String is not a Palindrome \n");
    }
}