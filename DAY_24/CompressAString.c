#include<stdio.h>
#include<string.h>

int main() {
    char str[100];

    printf("Enter string: ");
    scanf("%s",str);

    int count=1;
    int len=strlen(str);

    // Logic:
    // Count consecutive same characters
    // and print character followed by count.
    for (int i=0;i<len;i++){

        while (i<len-1&&str[i]==str[i + 1]){
            count++;
            i++;
        }

        printf("%c%d",str[i],count);
        count=1;
    }

    
}