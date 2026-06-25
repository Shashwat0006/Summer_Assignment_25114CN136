#include<stdio.h>
#include<string.h>

int main() {
    int n;

    printf("Enter number of words");
    scanf("%d",&n);

    char words[n][50],temp[50];

    printf("Enter words:\n");
    for(int i=0;i<n;i++) {
        scanf("%s",words[i]);
    }

    // Logic:
    // Compare lengths of adjacent words.
    // If first word length is greater than second,
    // swap both words.
    // ,..,Repeat process until words are sorted by length.

    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-i-1;j++) {
            if(strlen(words[j])>strlen(words[j+1])) {
                strcpy(temp,words[j]);
                strcpy(words[j],words[j+1]);
                strcpy(words[j+1],temp);
            }
        }
    }

    printf("Words Sorted by Length:\n");
    for(int i=0;i<n;i++) {
        printf("%s\n",words[i]);
    }

  
}