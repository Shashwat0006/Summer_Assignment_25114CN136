#include<stdio.h>

int main() {
    int i, j;

    // Logic:
    // Outer loop controls rows.
    // Inner loop prints stars equal to row number.

  for ( i = 0 ; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("*\n");
    }

    return 0;
}