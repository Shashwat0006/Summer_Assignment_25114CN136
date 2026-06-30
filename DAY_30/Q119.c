#include<stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    int n;

    printf("Enter number of employees");
    scanf("%d",&n);

    struct Employee emp[n];

    // Logic:
    // 1. Read employee id, name and salary.
    // 2. Store them in an array of structures.
    // 3. Display employee information.

    for(int i=0;i<n;i++)
    {
        printf("\nEmployee %d\n",i + 1);

        printf("Enter ID");
        scanf("%d",&emp[i].id);

        printf("Enter Name: ");
        scanf("%s",emp[i].name);

        printf("Enter Salary");
        scanf("%f", &emp[i].salary);
    }

    printf("\n--- Employee Records ---\n");

    for(int i=0;i<n;i++)
    {
        printf("\nEmployee ID :%d", emp[i].id);
        printf("\nName        :%s", emp[i].name);
        printf("\nSalary      :%.2f\n", emp[i].salary);
    }

    
}