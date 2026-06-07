#include <stdio.h>

/* Recursive function to find sum of digit*/
int sumDigits(int n)
{
    // Base case
   if (n == 0 )
        return 0;

    // Recursive call
   return(n%10) + sumDigits(n / 10);
}

int main()
{
    int num;

   printf("enter a number : ");
  scanf("%d", &num);

    printf("Sum of digits = %d\n", sumDigits(num));

    return 0;
}