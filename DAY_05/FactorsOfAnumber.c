#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    /*
        Logic:
        1. Check numbers from 1 to num.
        2. If num is completely divisible by i,
           then i is a factor.
        3. Print all such factors.
    */

    printf("Factors are: ");

    for(i = 1; i <= num; i++) {
        if(num % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
