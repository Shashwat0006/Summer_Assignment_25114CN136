#include<stdio.h>

int main()
{
    int n, i, sum = 0;
    float avg;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);

    // Logic: Elements input karte samay
    // har element ko sum mein add karte jana.
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    //... Logic: Average nikalne ka formula
    // Average ..= Sum / Total Number of Elements
    avg = (float)sum / n;

  printf("Sum +%d/n",sum);
    printf("Average = %.2f\n", avg);

    return 0;
}