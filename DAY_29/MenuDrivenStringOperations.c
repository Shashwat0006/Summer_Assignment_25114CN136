#include<stdio.h>
#include<string.h>

int main() {
    char str1[100],str2[100];
    int choice;

    // Logic:
    // 1. Read two strings.
    // 2. Display menu of string operations.
    // 3. Use switch-case to perform:
    //      - Find length
    //      - Copy string
    //      - Concatenate strings
    //      - Compare strings
    // 4. Display the output.

    printf("Enter first string");
    scanf("%s",str1);

    printf("Enter second string");
    scanf("%s",str2);

    printf("\n1. String Length\n");
    printf("2. Copy String\n");
    printf("3. Concatenate\n");
    printf("4. Compare\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Length=%lu\n",strlen(str1));
            break;

        case 2:
            strcpy(str2,str1);
            printf("Copied String=%s\n",str2);
            break;

        case 3:
            strcat(str1,str2);
            printf("Concatenated String = %s\n",str1);
            break;

        case 4:
            if(strcmp(str1, str2)==0)
                printf("Strings are Equal.\n");
            else
                printf("Strings are Not Equal.\n");
            break;

        default:
            printf("Invalid Choice!\n");
    }

    
}