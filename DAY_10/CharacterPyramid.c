#include<stdio.h>

int main()
{
    int i , j , n =5 ;
    // Outer loop controls rows
    for(i = 1; i <= n; i++)
    {
        // Print spaces before characters
        for(j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // Print characters in ascending order
        // A, AB, ABC ...
        for(j = 0; j < i; j++)
        {
            printf("%c", 'A' + j);
        }

        // Print characters in descending order
        // BA, CBA, DCBA ...
        for(j = i - 2; j >= 0; j--)
        {
            printf("%c", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}
