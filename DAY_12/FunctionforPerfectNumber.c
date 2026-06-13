#include<stdio.h>

// Function to check perfect number
int isPerfect(int n)
{
    int sum = 0;
    int i;

    // Logic:
    // Find all proper divisors
    // Add divisors
    // If sum equals original number,
    // it is a perfect number

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == n)
        return 1;

    return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPerfect(n))
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");

    return 0;
}