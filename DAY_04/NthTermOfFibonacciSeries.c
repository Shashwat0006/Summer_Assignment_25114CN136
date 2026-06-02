#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    printf("Enter n: ");
    scanf("%d", &n);

    if(n == 0)
        printf("0");
    else if(n == 1)
        printf("1");
    else {
        for(int i = 2; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }

        printf("nth Fibonacci term = %d\n", second);
    }

    return 0;
}