#include<stdio.h>
int main()
{
  
int decimal , binary[64] , i=0;

   printf("enter a decimal number :");
    scanf("%d", &decimal);

    /* Logic:
   Repeatedly divide the number by 2.
     Store the remainder (0 or 1).23
     Remainders collected in reverse order form the binary number.
*/

    while (decimal > 0) {

        binary [i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    printf("Binary Equivalent: ");

    // Print binary digits in reverse order
    for (int j = i - 1; j >= 0; j--) {
       printf("%d",binary[j]);
    }

    printf("\n");

    return 0;
}
