#include<stdio.h>

int main()
{
    int n, i, j;

    printf("Enter size of array");
    scanf("%d",&n);

    int arr[n];

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    int maxFreq = 0, element;

    // Logic:
    //... Count ...how many times each element occurs.
    // ...Keep track of the highest count.
    //.... Store the element having maximum frequency.

    for(i = 0; i < n; i++)
    {
        int count = 1;

        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count > maxFreq)
        {
            maxFreq = count;
            element = arr[i];
        }
    } 
    printf("Maximum Frequency Element = %d", element);

    return 0;
}