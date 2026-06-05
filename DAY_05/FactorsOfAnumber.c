#include <stdio.h>

int main() {
    int num, largestPrime = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Divide by 2 until possible
    while(num % 2 == 0) {
        largestPrime = 2;
        num /= 2;
    }

    // Check odd factors
    for(int i = 3; i * i <= num; i += 2) {
        while(num % i == 0) {
            largestPrime = i;
            num /= i;
        }
    }

    // If remaining number is prime
    if(num > 2) {
        largestPrime = num;
    }

    printf("Largest Prime Factor = %d\n", largestPrime);

    return 0;
}
