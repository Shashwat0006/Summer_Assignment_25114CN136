#include<stdio.h>

int main()
{
    char str[100];
    int length = 0, i;

    printf("Enter a string");
    scanf("%s",str);

    // LOGIC:
    //.... First./, find the length of the string.
    // ../ print ,..characters from the last index
    // to the first index.

    while(str[length]!='\0')
    {
        length++;
    }

    printf("Reversed string");

    for(i=length-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }

    printf("\n");

  
}