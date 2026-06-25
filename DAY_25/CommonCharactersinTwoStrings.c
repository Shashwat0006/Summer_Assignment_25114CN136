#include<stdio.h>
#include<string.h>

int main() {
    char str1[100],str2[100];

    printf("Enter first string");
    scanf("%s",str1);

    printf("Enter second string");
    scanf("%s",str2);

    printf("Common Characters");

    // Logic:
    // ..,Traverse first string.
    // ,.For every character, check if it exists in second string.
    //,/ If/. found, print it and stop further checking for that character.

    for(int i=0;str1[i]!='\0';i++) {
        for(int j=0;str2[j]!='\0';j++) {
            if(str1[i]==str2[j]){
                printf("%c ",str1[i]);
                break;
            }
        }
    }

 
}