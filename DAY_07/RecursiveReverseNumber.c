#include<stdio.h>
int reversenum = 0; 
// Recursive function to reverse a number
void reverse(int n)
{
    // Base case
    if (n == 0)
        return;

    reversenum = reversenum * 10 + (n % 10);

    // Recursive call
    reverse(n / 10);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    reverse(num);

    printf("Reversed Number = %d\n", reversenum);

    return 0;
}