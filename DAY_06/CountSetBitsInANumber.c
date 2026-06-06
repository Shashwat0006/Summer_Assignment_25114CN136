#include<stdio.h>

int main () 
{
int num , count = 0;

   printf("enter a number : ");
    scanf("%d",&num);
    //Logic:
     //Check the last bit using num % 2.
    //If it is 1, increment count.
    //Right shift the number by dividing by 2.

    while (num > 0) {
        if (num % 2 == 1) {
            count++;
        }
       num = num/2;
    }

    printf("Number of set bits = %d", count);

    return 0;
}
