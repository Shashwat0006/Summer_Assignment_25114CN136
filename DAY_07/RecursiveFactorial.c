#include<stdio.h>
/*.  Function to find a factorial .using recursion */
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

int main()
{
    int num;

    printf(" Enter A Number : ");
  
scanf("%d", &num);

    printf("Factorial = %d\n", factorial(num));

    return 0;
}
