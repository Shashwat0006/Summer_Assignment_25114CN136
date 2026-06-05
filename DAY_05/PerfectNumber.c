#include <stdio.h>

int main() {
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    /*
        Logic:
        1. Find all proper divisors of the number.
        2. Add those divisors.
        3. If sum of divisors equals the number,
           then it is a Perfect Number.
    */

    for(i = 1; i < num; i++) {
        if(num % i == 0) {
            sum += i;
        }
    }

    if(sum == num)
        printf("%d is a Perfect Number.", num);
    else
        printf("%d is not a Perfect Number.", num);

    return 0;
}
