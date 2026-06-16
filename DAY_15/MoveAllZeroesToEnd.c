#include<stdio.h>

int main()
{
    int n, i, j = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // LOGIC:
    //.. Traverse the array and place all non-zero elements
    //.. at the beginning of the array.
    // ..Keep track of the next position using variable j.
    // After all non-zero elements are placed,
    //.. fill the remaining positions with 0.

    for(i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            arr[j] = arr[i];
            j++;
        }
    }

    while(j < n)
    {
        arr[j] = 0;
        j++;
    }

    printf("Array after moving zeroes: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}