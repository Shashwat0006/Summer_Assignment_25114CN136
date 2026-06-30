#include<stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    int n;

    printf("Enter number of students: ");
    scanf("%d",&n);

    struct Student s[n];

    // Logic:
    // 1. Take input of roll number, name and marks.
    // 2. Store them in an array of structures.
    // 3. Traverse the array and display all records.

    for(int i=0;i<n;i++)
    {
        printf("\nStudent %d\n",i + 1);

        printf("Enter Roll No: ");
        scanf("%d",&s[i].roll);

        printf("Enter Name: ");
        scanf("%s",s[i].name);

        printf("Enter Marks: ");
        scanf("%f",&s[i].marks);
    }

    printf("\n------ Student Records ------\n");

    for(int i=0;i<n;i++)
    {
        printf("\nRoll No : %d", s[i].roll);
        printf("\nName    : %s", s[i].name);
        printf("\nMarks   : %.2f\n", s[i].marks);
    }

   }