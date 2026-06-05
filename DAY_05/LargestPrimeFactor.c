#include <stdio.h>



int main() {
    int num, largestPrime = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    /*
        Logic:
        1. Divide the number by 2 repeatedly.
        2. Check odd numbers from 3 onwards.
        3. Whenever a prime factor is found,
           store it in largestPrime.
        4. The last stored factor will be
           the largest prime factor.
    */

    while(num % 2 == 0) {
        largestPrime = 2;
        num /= 2;
    }

    for(int i = 3; i * i <= num; i += 2) {
        while(num % i == 0) {
            largestPrime = i;
            num /= i;
        }
    }

    if(num > 2) {
        largestPrime = num;
    }

    printf("Largest Prime Factor = %d", largestPrime);

    return 0;
}
