#include<stdio.h>

int main() {
    int i, j;

    // Logic:
    // Row number is printed repeatedly.
    // Example:
    // Row 3 -> print 3 three times.

    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}