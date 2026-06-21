#include<stdio.h>

int main()
{
    char str[100];
    int i = 0;

    printf("Enter a string in lowercase");
    scanf("%s",str);

    // LOGIC:
    // ,,..In,,... ASCII, lowercase and uppercase letters
    // ,,..have... a difference of 32.
    // ..,Subtract,,.. 32 from each lowercase character
    // ,,..to convert..,, it into uppercase.

    while(str[i] != '\0')
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            str[i]=str[i]-32;
        }

        i++;
    }

    printf("Uppercase string: %s\n", str);

    
}