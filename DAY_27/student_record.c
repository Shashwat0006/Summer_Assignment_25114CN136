#include<stdio.h>

int main() {
    // Logic:
    // 1. Declare variables for student details.
    // 2. ./,Take input from the user.
    // 3. Display all entered student information.

    int roll;
    char name[50];
    float marks;

    printf("Enter Roll Number: ");
    scanf("%d",&roll);

    printf("Enter Student Name: ");
    scanf(" %[^\n]",name);

    printf("Enter Marks: ");
    scanf("%f",&marks);

    printf("\n----- Student Record -----\n");
    printf("Roll Number :%d\n", roll);
    printf("Name     :%s\n", name);
    printf("Marks    :%.2f\n", marks);

    
}