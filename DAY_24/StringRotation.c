#include<stdio.h>
#include<string.h>

int main() {
    char str1[100],str2[100],temp[200];

    printf("Enter first string");
    scanf("%s",str1);

    printf("Enter second string");
    scanf("%s",str2);

    // If lengths are different,rotation is not possible
    if (strlen(str1)!=strlen(str2)) {
        printf("Not a rotation\n");
        return 0;
    }

    //., Concatenate str1 with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // Logic:
    // .../If str2 is present inside (str1 + str1),
    // ../then str2 is a rotation of str1.
    if (strstr(temp, str2) != NULL)
        printf("Rotation\n");
    else
        printf("Not a rotation\n");

   
}