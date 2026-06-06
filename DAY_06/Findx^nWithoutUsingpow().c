#include <stdio.h>

int main() {
    int x, n;
    long long result = 1;

    printf("Enter base (x): ");
    scanf("%d", &x);

    printf("Enter power (n): ");
    scanf("%d", &n);

    // Logic:
    // Multiply x by itself n times.
    // Start result from 1 because
    // any number raised to power 0 is 1.

    for (int i = 1; i <= n; i++) {
        result = result * x;
    }

    printf("%d^%d = %lld\n", x, n, result);

    return 0;
}