#include<stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

void input(struct Student s[], int n)
{
    // Logic:
    // Take input for all students using a function.

    for(int i=0;i<n;i++)
    {
        printf("\nStudent %d\n",i + 1);

        printf("Enter Roll No");
        scanf("%d",&s[i].roll);

        printf("Enter Name");
        scanf("%s",s[i].name);

        printf("Enter Marks");
        scanf("%f",&s[i].marks);
    }
}

void display(struct Student s[], int n)
{
    // Logic:
    // Traverse the array and display all student records.

    printf("\n------ Student Details ------\n");

    for(int i=0;i<n;i++)
    {
        printf("\nRoll No: %d", s[i].roll);
        printf("\nName  : %s", s[i].name);
        printf("\nMarks : %.2f\n", s[i].marks);
    }
}

float average(struct Student s[], int n)
{
    // Logic:
    // Calculate the sum of marks.
    // Divide by total students to get average.

    float sum=0;

    for(int i=0;i<n; i++)
        sum += s[i].marks;

    return sum / n;
}

int main()
{
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    input(s, n);

    display(s, n);

    printf("\nAverage Marks = %.2f\n", average(s, n));

    
}