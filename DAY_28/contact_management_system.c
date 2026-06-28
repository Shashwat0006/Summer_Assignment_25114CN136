#include<stdio.h>

int main() {
    char name[50];
    char phone[15];
    char email[50];

    // Logic:
    // 1. Read Contact Name.
    // 2. Read Phone Number.
    // 3. Read Email Address.
    // 4. Display Contact Information.

    printf("Enter Contact Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Phone Number: ");
    scanf("%s", phone);

    printf("Enter Email: ");
    scanf("%s", email);

    printf("\n----- Contact Details -----\n");
    printf("Name : %s\n", name);
    printf("Phone : %s\n", phone);
    printf("Email : %s\n", email);

    return 0;
}