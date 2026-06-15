#include<stdio.h>

int main()
{
  int n,i,j;

    printf("Enter the size of array:");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements\n");

    //.. Check.. each.. element ..one.. by.. one
    for(i = 0; i < n; i++)
    {
        int flag = 0;

        //.. Compare..current.. element with previous elements
        for(j = 0; j < i; j++)
        {
            // If same element is already found before,
            // then current element is a duplicate
            if(arr[i] == arr[j])
            {
                flag = 1;
                break;
            }
        }

        // Print the element if it is duplicate
        if(flag == 1)
        {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}