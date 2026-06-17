#include<stdio.h>

int main()
{
    int n,i,j,k;

    printf("Enter size of array");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Logic:
    // Compare each element with the next elements.
    // If duplicate is found, shift elements left.
    // .....Decrease size of array after deletion.

    for(i =0;i< n;i++)
    {
        for(j =i+1;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                for(k = j; k<n-1;k++)
                {
                    arr[k]=arr[k + 1];
                }

                n--;
                j--;
            }
        }
    }

    printf("Array after removing duplicates:\n");

    for(i =0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    
}