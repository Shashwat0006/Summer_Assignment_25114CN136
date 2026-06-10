#include<stdio.h>

int main()
{
    int i, j;
    char ch = 'A';

    // Outer loop controls rows
    for(i = 1; i <= 5; i++)
    {
        // Print current character i times
        for(j = 1; j <= i; j++)
        {
            printf("%c", ch);
        }

        // Move to next line
        printf("\n");

        // Move to next alphabet
        ch++;
    }

    return 0;
}