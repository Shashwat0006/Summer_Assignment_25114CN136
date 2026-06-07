#include<stdio.h>

/* Recursive function to calculate factorial */
long long factorial(int n)
{
    // Base case
    if (n == 0 || n == 1)
        return 1;

    // Recursive call
    return n * factorial(n - 1);
}

int main()
{
    int num;

   printf(" enter a number : ");
    scanf("%d", &num);

    printf("Factorial of %d = %lld\n", num, factorial(num));

    return 0;
}