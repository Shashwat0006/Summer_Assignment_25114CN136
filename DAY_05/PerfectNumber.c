#include <stdio.h>

int main() {
    int num, temp, digit;
    int sum = 0, fact, i;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Calculate sum of factorials of digits
    while(temp > 0) {
        digit = temp % 10;

        fact = 1;
        for(i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    // Check strong number
    if(sum == num) {
        printf("%d is a Strong Number.\n", num);
    } else {
        printf("%d is not a Strong Number.\n", num);
    }

    return 0;
}
