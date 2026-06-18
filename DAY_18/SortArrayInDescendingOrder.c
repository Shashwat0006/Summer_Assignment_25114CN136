#include<stdio.h>

int main()
{
    int n, i, j, temp;

    printf("Enter number of elements");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    /* LOGIC:
       ...Compare.. every pair of elements.
       ..If the.. current element is smaller than the next one,
       swap their positions.
       Repeating this process arranges elements
       from largest to smallest.
    */

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Array in Descending Order:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

   
}