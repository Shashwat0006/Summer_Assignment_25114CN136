#include<stdio.h>
#include<string.h>

int main() {
    int n;

    printf("Enter number of names");
    scanf("%d",&n);

    char names[n][50],temp[50];

    printf("Enter names:\n");
    for(int i=0;i<n;i++) {
        scanf("%s",names[i]);
    }

    // Logic:
    // Compare adjacent names using strcmp().
    // If current name is greater than next name,
    // swap them using strcpy().
    // Repeat until array becomes sorted.

    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-i-1;j++) {
            if(strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1],temp);
            }
        }
    }

    printf("Names in Alphabetical Order:\n");
    for(int i=0;i<n;i++) {
        printf("%s\n", names[i]);
    }

  
}