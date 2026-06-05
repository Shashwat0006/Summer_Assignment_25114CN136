#include <stdio.h>

int main() {
    int num, temp, digit;
    int sum = 0, fact, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    /*
        Logic:
        1. Extract each digit of the number.
        2. Find factorial of each digit.
        3. Add all factorials.
        4. If sum equals original number,
           then it is a Strong Number.
    */

    while(temp > 0) {
        digit = temp % 10;

        fact = 1;
        for(i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    if(sum == num)
        printf("%d is a Strong Number.", num);
    else
        printf("%d is not a Strong Number.", num);

    return 0;
}
