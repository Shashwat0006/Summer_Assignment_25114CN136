#include<stdio.h>

int main()
{
    int i, j;

    /* Outer. loop. controls rows
     Starts. from 5 and. decreases. to 1*/
    for(i = 5; i >= 1; i--)
    {
        // Print stars equal to current row number
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        // Move to next line after each row
        printf("\n");
    }

    return 0;
}