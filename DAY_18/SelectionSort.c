#include<stdio.h>

int main()
{
    int n,i,j,minIndex,temp;

    printf("Enter number of elements");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    /* LOGIC:
       ..Find ..the smallest element from the unsorted part
       ...of ...the array and place it at its correct position.
       ....Repeat.. this process for all positions.
       ....After ..each pass, one element gets fixed.
    */

    for(i = 0; i < n - 1; i++)
    {
        minIndex = i;

        for(j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    printf("Sorted Array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }

    return 0;
}