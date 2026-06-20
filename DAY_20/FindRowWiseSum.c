#include<stdio.h>

int main()
{
    int row,col;
    int i,j;

    printf("Enter number of rows");
    scanf("%d",&row);

    printf("Enter number of columns");
    scanf("%d",&col);

    int matrix[row][col];

    printf("Enter matrix elements");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    // Logic:
    // Visit each row one by one.
    // For every row, start sum from 0.
    // Add all elements present in that row.
    // ,,..Print,,.. the sum and move to the next row.

    printf("\nRow Wise Sum:\n");

    for(i = 0; i < row; i++)
    {
        int rowSum = 0;

        for(j=0;j<col;j++)
        {
            rowSum+=matrix[i][j];
        }

        printf("Row %d Sum = %d\n", i + 1, rowSum);
    }

   
}