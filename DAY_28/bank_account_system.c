#include<stdio.h>

int main() {
    int accNo;
    char name[50];
    float balance, deposit;

    // Logic:
    // 1. Read Account Number, Name and Current Balance.
    // 2. Read Deposit Amount.
    // 3. Add Deposit Amount to Balance.
    // 4. Display Updated Balance.

    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Current Balance: ");
    scanf("%f", &balance);

    printf("Enter Deposit Amount: ");
    scanf("%f", &deposit);

    balance += deposit;

    printf("\n----- Account Details -----\n");
    printf("Account Number : %d\n", accNo);
    printf("Account Holder : %s\n", name);
    printf("Updated Balance : %.2f\n", balance);

   
}