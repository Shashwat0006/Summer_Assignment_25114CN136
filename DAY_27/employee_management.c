#include<stdio.h>

int main() {
    // Logic:
    // 1. Declare variables for employee details.
    // 2. .,,Take employee ID, name, and salary as input.
    // 3. Display the employee information.

    int empId;
    char empName[50];
    float salary;

    printf("Enter Employee ID: ");
    scanf("%d",&empId);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]",empName);

    printf("Enter Salary");
    scanf("%f", &salary);

    printf("\n----- Employee Details -----\n");
    printf("Employee ID : %d\n", empId);
    printf("Name    : %s\n", empName);
    printf("Salary   : %.2f\n", salary);

    
}