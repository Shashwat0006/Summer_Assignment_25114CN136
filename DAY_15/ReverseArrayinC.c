#include<stdio.h>

int main()
{
    int n,i,temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("enter elements ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // ..LOGIC:
    // .Start.. from .both. ends. of. the.. array.
    // Swap.. first element with last element..,
    // second.. element with second last element, and so on.
    // Continue.. until the middle of the array is reached.

    for(i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

  printf("Reversed array");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}