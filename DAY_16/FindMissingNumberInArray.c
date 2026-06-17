#include<stdio.h>

int main()
{
    int n, i;
    
    printf("Enter value of n");
    scanf("%d", &n);

    int arr[n - 1];

    printf("Enter %d elements", n - 1);
    for(i = 0; i < n - 1; i++)
    {
        scanf("%d",&arr[i]);
    }

    int total = n * (n + 1) / 2;
    int sum = 0;

    // Logic:
    // ..Find sum of all elements present in array.
    //.. Calculate .,sum of numbers from 1 to n using formula.
    // ,,Difference of both sums gives the missing number.

    for(i = 0; i < n - 1; i++)
    {
        sum += arr[i];
    }

    printf("Missing Number = %d", total - sum);

    return 0;
}