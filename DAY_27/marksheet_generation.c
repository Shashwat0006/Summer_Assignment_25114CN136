#include<stdio.h>

int main() {
    // Logic:
    // 1. Take marks of five subjects.
    // 2. Calculate total marks.
    // 3. Calculate percentage.
    // 4. Determine grade using if-else.
    // 5. Display the complete marksheet.

    float s1,s2,s3,s4,s5;
    float total, percentage;

    printf("Enter marks of Subject 1: ");
    scanf("%f",&s1);

    printf("Enter marks of Subject 2: ");
    scanf("%f",&s2);

    printf("Enter marks of Subject 3: ");
    scanf("%f",&s3);

    printf("Enter marks of Subject 4: ");
    scanf("%f", &s4);

    printf("Enter marks of Subject 5");
    scanf("%f",&s5);

    total=s1+s2+s3+s4+s5;
    percentage=total / 5;

    printf("\n----- Marksheet -----\n");
    printf("Total Marks : %.2f\n", total);
    printf("Percentage  : %.2f%%\n", percentage);

    if (percentage>=90)
        printf("Grade : A+\n");
    else if (percentage>=80)
        printf("Grade : A\n");
    else if (percentage>=70)
        printf("Grade : B\n");
    else if (percentage>=60)
        printf("Grade:C\n");
    else if (percentage>=40)
        printf("Grade:D\n");
    else
        printf("Grade :F(Fail)\n");

   
}