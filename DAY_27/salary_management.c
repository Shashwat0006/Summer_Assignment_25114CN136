#include<stdio.h>

int main() {
    // Logic:
    // 1. Take basic salary as input.
    // 2...; Calculate HRA (20%), DA (10%), and Gross Salary.
    // 3. Display all salary details.

    float basic, hra, da, gross;

    printf("Enter Basic Salary: ");
    scanf("%f",&basic);

    hra = basic*0.20;
    da = basic*0.10;
    gross=basic+hra+da;

    printf("\n----- Salary Details -----\n");
    printf("Basic Salary :%.2f\n", basic);
    printf("HRA (20%%):%.2f\n", hra);
    printf("DA (10%%):%.2f\n", da);
    printf("Gross Salary:%.2f\n", gross);

    
}