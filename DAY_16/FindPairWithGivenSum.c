#include<stdio.h>

int main()
{
    int n,i,j,target;

    printf("Enter size of array");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter target sum");
    scanf("%d",&target);

    // Logic:
    // Compare every element with remaining elements.
    // If their sum matches target,
    // print that pair.

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i] + arr[j] == target)
            {
                printf("Pair = %d %d\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}