#include<stdio.h>
#include<string.h>

int main() {
    char str[100];

    printf("Enter string");
    scanf("%s",str);

    int len=strlen(str);

    // Logic:
    // For every character,
    // check if it appeared before.
    // If not, print it.
    for (int i=0;i<len;i++) {

        int duplicate=0;

        for (int j=0;j<i;j++) {
            if (str[i] == str[j]) {
                duplicate = 1;
                break;
            } 
        }

        if (!duplicate)
            printf("%c", str[i]);
    }

 
}