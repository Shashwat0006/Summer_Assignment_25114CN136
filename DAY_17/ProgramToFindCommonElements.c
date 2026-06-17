#include<stdio.h>

int main()
{
    int n1,n2,i,j,found;

    printf("Enter size of first array");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Enter elements of first array");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr2[n2];

    printf("Enter elements of second array");
    for(i =0;i<n2;i++)
    {
        scanf("%d", &arr2[i]);
    }

    printf("Common Elements: ");

    /* LOGIC:
       Pick one element from first array.
       Search the same value in second array.
       If found, print it and move to next element.
       This way only common values are displayed
    */

    for(i = 0; i < n1; i++)
    {
        found = 0;

        for(j = 0; j < n2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                found = 1;
                break;
            }
        }

        if(found)
        {
            printf("%d ", arr1[i]);
        }
    }

    return 0;
}