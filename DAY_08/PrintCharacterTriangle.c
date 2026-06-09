#include<stdio.h>

int main() {
    int i, j;

    // Logic:
    // For every row, print characters
    // starting from A up to the row limit.

    for(i = 1; i <= 5; i++) {
        for(j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}