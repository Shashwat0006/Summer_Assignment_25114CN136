#include <stdio.h>

int main() {
    long long binary;
    int decimal = 0, base = 1, remainder;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    // Logic:
    // Extract each digit from right to left.
    // Multiply digit by corresponding power of 2.
    // Add the result to decimal value.

    while (binary > 0) {
        remainder = binary % 10;
        decimal = decimal + (remainder * base);
        base = base * 2;
        binary = binary / 10;
    }

    printf("Decimal Equivalent: %d\n", decimal);

    return 0;
}