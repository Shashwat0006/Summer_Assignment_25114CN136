#include <stdio.h>

int main() {
    int quantity, choice;

    // Logic:
    // 1. Initialize inventory quantity.
    // 2. Display menu:
    //      - View Stock
    //      - Add Stock
    //      - Sell Stock
    // 3. Read user's choice.
    // 4. Update inventory accordingly.
    // 5. Prevent selling more items than available.
    // 6. Display updated stock.

    int stock = 100;

    printf("===== INVENTORY MANAGEMENT =====\n");
    printf("1. View Stock\n");
    printf("2. Add Stock\n");
    printf("3. Sell Stock\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Available Stock = %d\n", stock);
            break;

        case 2:
            printf("Enter quantity to add: ");
            scanf("%d", &quantity);
            stock += quantity;
            printf("Updated Stock = %d\n", stock);
            break;

        case 3:
            printf("Enter quantity to sell: ");
            scanf("%d", &quantity);

            if(quantity <= stock) {
                stock -= quantity;
                printf("Updated Stock = %d\n", stock);
            } else {
                printf("Insufficient Stock!\n");
            }
            break;

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}