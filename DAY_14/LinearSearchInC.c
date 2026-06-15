#include<stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int key, i, found = 0;

    printf("Enter the element to search: ");
    scanf("%d", &key);

    /* .Traverse. .the. array from first .element. to last .element*/
    for(i = 0; i < n; i++)
    {
        /* .Compare current element. with the search key*/
        if(arr[i] == key)
        {
            found = 1;   // Element found
            printf("Element found at index %d\n", i);
            break;       //..Stop.. searching after finding.. the element.
        }
    }

    // If found remains 0, element is not present in array
    if(found == 0)
    {
        printf("Element not found\n");
    }

    return 0;
}