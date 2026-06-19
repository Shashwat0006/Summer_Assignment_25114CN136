#include<stdio.h>

int main()
{
    int row,col,i,j;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    int a[row][col];

    printf("\nEnter matrix elements:\n");
    for(i= 0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    /* LOGIC:
       In transpose, rows become columns
       and columns become rows.
      .... Print ..element... a[j][i] instead ...of a[i][j]...
    */

    printf("\nTranspose Matrix:\n");

    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d",a[j][i]);
        }
        printf("\n");
    }

   
}