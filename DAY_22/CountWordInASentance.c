#include<stdio.h>

int main()
{
    char str[200];
    int i,words=1;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    //.... Logic:... Traverse the string and count spaces
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            // Logic: Every space indicates a new word
            words++;
        }
    }

    printf("Total Words = %d",words);

    
}