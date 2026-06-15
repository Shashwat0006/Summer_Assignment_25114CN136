#include<stdio.h>

int main()
{
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int maxIndex = 0;

    // Find index of largest element
    for(i = 1; i < n; i++)
    {
        if(arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
    }

    int secondIndex;

    if(maxIndex == 0)
        secondIndex = 1;
    else
        secondIndex = 0;

    // Find second largest element
    for(i = 0; i < n; i++)
    {
        if(i != maxIndex && arr[i] > arr[secondIndex])
        {
            secondIndex = i;
        }
    }

    printf("Second Largest Element = %d", arr[secondIndex]);

    return 0;
}