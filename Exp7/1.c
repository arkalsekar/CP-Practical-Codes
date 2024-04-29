// Structure for Student Name, Roll No and Fees;
#include <stdio.h>
struct Student
{
    char name[100];
    int rollNo;
    float fees;
};

void main () {
    // Array of Students
    int n;
    printf("Enter the Number of Students \n");
    scanf("%d", &n);
    struct Student students[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter Details for Student No %d \n", i);
        printf("Enter Students Name : ");
        scanf("%s", students[i].name);

        printf("Enter Students Roll No : ");
        scanf("%d", &students[i].rollNo);

        printf("Enter Students Fees : ");
        scanf("%f", &students[i].fees);
    }

    for (int j = 0; j < n; j++)
    {
        printf("Detail for Student No %d \n", j);
        printf("Student Name %s \n", students[j].name);
        printf("Student Roll No %d \n", students[j].rollNo);
        printf("Student Fees %f \n", students[j].fees);
    }
        
}
