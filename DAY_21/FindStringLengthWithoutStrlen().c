#include <stdio.h>

int main()
{
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // LOGIC:
    //.... Start;' from ;;.index 0 and keep moving forward
    // ....until the null,, character '\0' is found.
    //.... Count each ,,character to get the length.

    while(str[length] != '\0')
    {
        length++;
    }

    printf("Length of string = %d\n", length);

    return 0;
}