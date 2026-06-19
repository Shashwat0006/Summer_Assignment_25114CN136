#include<stdio.h>

int main()
{
    int r,c,i,j;

    printf("Enter rows and columns");
    scanf("%d%d", &r, &c);

    int a[r][c], b[r][c];

    printf("Enter elements of first matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    /* LOGIC:
       Read both matrices.
       Visit every position one by one.
       Add corresponding element of second matrix
       into first matrix itself.
       Finally print the updated first matrix.
    */

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            a[i][j]=a[i][j]+b[i][j];
        }
    }

    printf("Addition of Matrices");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

   
}