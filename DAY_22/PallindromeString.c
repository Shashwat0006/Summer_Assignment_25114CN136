#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i,len,flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // Logic:... Find the ....length... of the string
    len = strlen(str);

    // Logic:... Compare.. characters.... from start and end
    for(i = 0; i < len / 2; i++)
    {
        if(str[i] != str[len - i - 1])
        {
            // ...Logic: If.. any... pair/. doesn't match, not a palindrome
            flag = 0;
            break;
        }
    }

    // Logic: Check the flag value
    if(flag == 1)
        printf("Palindrome String");
    else
        printf("Not a Palindrome String");

    
}