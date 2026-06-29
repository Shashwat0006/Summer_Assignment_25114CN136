#include<stdio.h>

int main() {
    int choice;
    float num1,num2;

    // Logic:
    // 1. Display a menu with arithmetic operations.
    // 2. Read user's choice.
    // 3. Input two numbers.
    // 4. ,/Use switch-case to perform the selected operation.
    // 5. Display the result.
    // 6. Handle invalid choice and division by zero.

    printf("=MENU DRIVEN CALCULATOR =\n");
    printf("1.Addition\n");
    printf("2Subtraction\n");
    printf("3Multiplication\n");
    printf("4Division\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    printf("Enter two numbers");
    scanf("%f %f",&num1,&num2);

    switch (choice) {
        case 1:
            printf("Result=%.2f\n",num1+num2);
            break;

        case 2:
            printf("Result = %.2f\n",num1-num2);
            break;

        case 3:
            printf("Result = %.2f\n", num1 * num2);
            break;

        case 4:
            if (num2!=0)
                printf("Result=%.2f\n",num1 / num2);
            else
                printf("Division by zero is not allowed.\n");
            break;

        default:
            printf("Invalid Choice!\n");
    }

    
}