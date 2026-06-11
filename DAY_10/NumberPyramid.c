#include<stdio.h>

int main()
{
    int i,j,n =5;

    // Outer loop controls rows
      for(i = 1 ; i <=n; i++)
    {
        // Print leading spaces
        for(j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // Print ascending numbers
        // EXAMPLE=23
        for(j = 1; j <= i; j++)
        {
           printf("%d",j);
        }

        // Print descending numbers
        //EXAMPLE=23
        for(j = i - 1; j >= 1;j--)
        {
            printf("%d",j);
        }

        printf("\n");
    }

    return 0;
}
