#include<stdio.h>

int main()
{
    int i, j, n = 5;

    // Outer loop starts from last row
    for(i = n; i >= 1; i--)
    {
        // Spaces increase row by row
        for(j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // Stars decrease row by row
        // ,.Number ..of stars = (2*i - 1)
        for(j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}