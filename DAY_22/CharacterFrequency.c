#include<stdio.h>

int main()
{
    char str[100],ch;
    int i,count=0;

    printf("Enter a string");
    fgets(str, sizeof(str), stdin);

    printf("Enter character to find frequency");
    scanf("%c",&ch);

    // Logic:/.../. Traverse the string
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            // Logic: ...Increase ....count... whenever character matches
            count++;
        }
    }

    printf("Frequency of '%c' = %d", ch, count);

    
}