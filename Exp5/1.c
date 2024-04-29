// strlen, strcmp, str cpy, strcat
#include <stdio.h>
#include <string.h>

void main () {
    char str1[] = "Hello";
    char str2[] = "World";
    // char greeting[] = strcat(str1, str2);
    int cmp = strcmp(str1, str2);
    int len = strlen(str1);
    char newStr[] = "";
    strcpy(newStr, str1);

    printf("%s \n", strcat(str1, str2));
    printf("The Length of str1 is %d \n", len);
    printf("The Comparision of str1 and str2 is %d \n", cmp);
    printf(" %s \n", newStr);

}

