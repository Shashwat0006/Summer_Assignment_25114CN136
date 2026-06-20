#include<stdio.h>

int main()
{
    int r,c,i,j;

    printf("Enter rows and columns");
    scanf("%d %d",&r,&c);

    int a[r][c];

    printf("Enter matrix elements:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    // Logic:
    // Traverse one column at a time.
    // Add all elements of that column and print the sum.

    printf("\nColumn-wise Sum:\n");

    for(j=0;j<c;j++)
    {
        int sum=0;

        for(i=0;i<r;i++)
        {
            sum += a[i][j];
        }

        printf("Sum of Column %d = %d\n", j + 1, sum);
    }

   
}