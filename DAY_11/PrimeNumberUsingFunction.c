#include<stdio.h>

// Function to check prime number
int isPrime(int n)
{
    int i;

    // .Numbers. less than or. equal to 1 are not prime
    if (n <= 1)
        return 0;

    // ..Check. divisibility. from 2 to n-1
    for (i = 2; i < n; i++)
    {
        // If divisible, number is not prime
        if (n % i == 0)
            return 0;
    }

    // No divisor found, number is prime
    return 1;
}

int main()
{
    int n;

    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Call function and display result
    if (isPrime(n))
        printf("Prime Number");
    else
        printf("Not Prime Number");

    return 0;
}