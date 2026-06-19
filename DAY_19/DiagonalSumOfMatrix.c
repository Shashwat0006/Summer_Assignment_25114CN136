#include<stdio.h>

int main()
{
    int n,i,j,sum=0;

    printf("Enter size of square matrix: ");
    scanf("%d",&n);

    int a[n][n];

    printf("\nEnter matrix elements:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    /* LOGIC:
       In a square matrix, diagonal elements
       have row index equal to column index.
       Check i == j and add those elements.
    */

    for(i=0;i<n;i++)
    {
        sum =sum+a[i][i];
    }

    printf("\nDiagonal Sum = %d", sum);

    
}