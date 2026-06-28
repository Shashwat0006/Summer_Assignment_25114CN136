#include<stdio.h>

int main() {
    char name[50];
    int tickets;
    float price=250.0,total;

    // Logic:
    // 1. Read Customer Name.
    // 2. Read Number of Tickets.
    // 3. Calculate Total Amount.
    // 4. Display Booking Details.

    printf("Enter Customer Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Number of Tickets: ");
    scanf("%d", &tickets);

    total=tickets*price;

    printf("\n--Ticket Details --\n");
    printf("Customer Name :%s\n",name);
    printf("Tickets : %d\n",tickets);
    printf("Price Per Ticket :%.2f\n",price);
    printf("Total Amount :%.2f\n",total);

   
}