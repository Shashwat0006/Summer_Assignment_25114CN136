#include<stdio.h>

int main()
{
    int n,i,key;
    
    printf("Enter size of array");
    scanf("%d", &n);

    int arr[n];

    printf("Enter sorted array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1, mid, found = 0;

    /* LOGIC:
       Binary Search works only on a sorted array.
       Find the middle element.
       If key equals middle element, element is found.
       If key is smaller, search in left half.
       If key is greater, search in right half.
       Continue until element is found or search space becomes empty.
    */

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            found = 1;
            printf("Element found at index %d", mid);
            break;
        }
        else if(key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if(found == 0)
    {
        printf("Element not found");
    }

    return 0;
}