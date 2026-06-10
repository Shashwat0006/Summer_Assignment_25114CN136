#include<stdio.h>

int main()
{
    int i, j;

    // Outer loop controls rows
    // Number of digits decreases in every row
    for(i = 5; i >= 1; i--)
    {
        // Print numbers from 1 to i
        for(j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        // Move to next row
        printf("\n");
    }

    return 0;
}