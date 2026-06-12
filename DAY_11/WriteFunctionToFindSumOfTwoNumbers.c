#include<stdio.h>

// Function. to find .sum of two ..numbers
int sum(int a, int b)
{
    // Add both numbers and return result
    return a + b;
}

int main()
{
    int x, y;

    // Take two numbers as input
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    // Call function and print sum
    printf("Sum = %d", sum(x, y));

    return 0;
}