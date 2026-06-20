#include<stdio.h>

int main()
{
    int n,i,j,flag=1;

    printf("Enter order of square matrix: ");
    scanf("%d",&n);

    int a[n][n];

    printf("Enter matrix elements:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Logic:
    // ....A matrix..., is symmetric if a[i][j] == a[j][i]
    // ...for every row and column position.

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=a[j][i])
            {
                flag=0;
                break;
            }
        }
    }

    if(flag)
        printf("Matrix is Symmetric.");
    else
        printf("Matrix is Not Symmetric.");

    
}