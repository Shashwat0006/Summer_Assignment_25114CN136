#include <stdio.h>

int main() {
    int num, i;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    // Find and print factors
    for(i = 1; i <= num; i++) {
        if(num % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
