#include<stdio.h>

int main()
{
    long long bin;
    int dec = 0;
    int power = 1;
    int digit;

    printf("Enter The Binary Number :");
    scanf("%lld", &bin);

    /*
        Logic:
        Take the binary number digit by digit from right to left

        Multiply each digit with its corresponding power of 2

        Add the result to get the decimal number
    */

    while (bin != 0)
    {
        digit = bin % 10;       // Extract last digit
        dec = dec + digit * power;
      power = power*2;      // Next power of 2
        bin = bin / 10;       
    }

    printf("Decimal Number = %d\n", dec);

    
}
