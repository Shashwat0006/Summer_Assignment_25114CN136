#include<stdio.h>

int main()
{
    char str[1000];
    int freq[256]={0};
    int i;

    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);

    // Step 1:.././., Count frequency of each character
    for(i = 0; str[i] != '\0'; i++)
    {
        freq[(unsigned char)str[i]]++;
    }

    // Step 2: Traverse again and find first char
    // whose frequency is 1
    for(i=0;str[i]!='\0';i++)
    {
        if(freq[(unsigned char)str[i]] == 1)
        {
            printf("First non-repeating character = %c\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.\n");

    return 0;
}