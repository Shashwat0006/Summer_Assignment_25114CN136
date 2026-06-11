#include<stdio.h>

int main()
{
    int i, j, n = 5;

    // Outer loop controls rows
    for(i = 1; i <= n; i++)
    {
        // Print spaces before stars
        // Spaces decrease in every row
        for(j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // Print stars
        /* ,.Number. of stars. = (2*i - 1)*/
        for(j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}