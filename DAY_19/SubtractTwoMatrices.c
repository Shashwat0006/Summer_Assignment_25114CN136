#include<stdio.h>

int main()
{
    int row, col;
    
    printf("Enter rows: ");
    scanf("%d", &row);

    printf("Enter columns: ");
    scanf("%d", &col);

    int first[row][col];
    int second[row][col];

    printf("\nEnter elements of first matrix:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&first[i][j]);
        }
    }

    printf("\nEnter elements of second matrix:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d", &second[i][j]);
        }
    }

    /* LOGIC:
       ...Traverse.. both.. matrices using nested loops.
       ..Subtract ..each.. element of second matrix
       ..from the.. corresponding element of first matrix.
       ....Store ..the result back into the first matrix.
    */

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            first[i][j] -= second[i][j];
        }
    }

    printf("\nMatrix after subtraction:\n");

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",first[i][j]);
        }
        printf("\n");
    }

   
}