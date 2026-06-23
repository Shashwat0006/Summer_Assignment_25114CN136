#include<stdio.h>
#include<string.h>

int main()
{
    char str1[1000],str2[1000];
    int freq[256]={0};
    int i;

    printf("Enter first string: ");
    scanf("%s",str1);

    printf("Enter second string: ");
    scanf("%s",str2);

    // ../,If lengths differ, strings cannot be anagrams
    if(strlen(str1)!=strlen(str2))
    {
        printf("Not Anagram\n");
        return 0;
    }

    // Increase count for first string characters
    for(i = 0; str1[i] != '\0'; i++)
    {
        freq[(unsigned char)str1[i]]++;
    }

    // Decrease count for second string characters
    for(i = 0; str2[i] != '\0'; i++)
    {
        freq[(unsigned char)str2[i]]--;
    }

    // If any frequency is not zero,
    // strings are not anagrams
    for(i = 0; i < 256; i++)
    {
        if(freq[i] != 0)
        {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");

    
}