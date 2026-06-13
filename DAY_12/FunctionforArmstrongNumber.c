#include<stdio.h>

// Function to check Armstrong number
int isArmstrong(int n)
{
    int original = n;
    int sum = 0;
    int digit;

    // Logic:
    // Extract each digit
    // Find cube of digit
    // Add cubes
    // Compare sum with original number

    while (n > 0)
    {
        digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }

    if (sum == original)
        return 1;

    return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n))
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}