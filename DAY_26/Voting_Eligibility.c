
#include<stdio.h>

int main() {
    int age;

    printf("Enter your age");
    scanf("%d", &age);

    // Check if age is valid
    if (age<0) {
        printf("Invalid Age!\n");
    }

    //,./ If age is 18 or above, user is eligible
    else if (age >= 18) {
        printf("You are eligible to vote.\n");
    }

    // Otherwise not eligible
    else {
        printf("You are NOT eligible to vote.\n");
    }

    return 0;
}