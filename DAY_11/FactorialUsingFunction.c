#include<stdio.h>

// ..Function .to .calculate .factorial
long long factorial(int n)
{
    long long fact = 1;
    int i;

    // Multiply. numbers ..from 1 to n
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    // Return factorial value
    return fact;
}

int main()
{
    int n;

    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Call function and print factorial
    printf("Factorial = %lld", factorial(n));

    return 0;
}