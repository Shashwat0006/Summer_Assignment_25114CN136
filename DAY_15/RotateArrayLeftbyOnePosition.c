#include<stdio.h>

int main()
{
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // ..LOGIC:
    //.. Store ..the first.. element in a temporary variable.
    //.. Shift.. all .remaining elements one position to the left.
    // ..Place the stored first element at the last index.

    int first = arr[0];

    for(i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = first;

    printf("Array after left rotation: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}