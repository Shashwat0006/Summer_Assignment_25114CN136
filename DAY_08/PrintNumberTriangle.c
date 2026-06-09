#include<stdio.h>

int main() {
    int i, j;

    // Logic:
    // Row 1 prints 1
    // Row 2 prints 1 2
    // Row. 3. prints. 1 2 3 and so on

    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}