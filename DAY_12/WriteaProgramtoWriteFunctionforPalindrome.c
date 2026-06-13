#include<stdio.h>

// ...Function .to check.. palindrome
int isPalindrome(int n)
{
    int original = n;
    int reverse = 0;
    int digit;

    // Logic:
    // Extract last digit of number
    // Add digit to reversed number
    // Repeat until number becomes 0

    while (n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    // If original and reverse are same,
    // number is palindrome

    if (original == reverse)
        return 1;

    return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPalindrome(n))
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}