#include<stdio.h>

// Recursive Function find Fibonacci term
int fibonacci(int n)
{
    // Base cases
    if (n == 0)
        return 0;

    if (n== 1)
        return 1;

    // Recursive call
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;

 printf("Enter the number of term : " );
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d", fibonacci(i));
    }

    return 0;
}