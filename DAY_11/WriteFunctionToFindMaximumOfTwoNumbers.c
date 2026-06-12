#include<stdio.h>

// Function.. to find maximum.. number
int maximum(int a, int b)
{
    // Compare both numbers
    if (a > b)
        return a;   // Return first number if greater
    else
        return b;   // Otherwise return second number
}

int main()
{
    int x, y;

    // Take input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    // Display maximum number
    printf("Maximum = %d", maximum(x, y));

    return 0;
}