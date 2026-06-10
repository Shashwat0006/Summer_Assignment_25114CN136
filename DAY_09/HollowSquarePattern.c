#include<stdio.h>

int main()
{
    int i, j;

    // Outer loop controls rows
    for(i = 1; i <= 5; i++)
    {
        // Inner loop controls columns
        for(j = 1; j <= 5; j++)
        {
            // Print star on borders:
            // First row, Last row,
            // First column, Last column
            if(i == 1 || i == 5 || j == 1 || j == 5)
            {
                printf("*");
            }
            else
            {
                // Print space inside square
                printf(" ");
            }
        }

        // Move to next row
        printf("\n");
    }

    return 0;
}