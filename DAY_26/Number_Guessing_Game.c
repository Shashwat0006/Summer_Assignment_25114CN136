#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int number, guess;

    // ,./Generate a random number between 1 and 100
    srand(time(0));
    number = rand() % 100 + 1;

    printf("===== Number Guessing Game =====\n");

    // Keep taking input until user guesses correctly
    do {
        printf("Enter your guess (1-100): ");
        scanf("%d", &guess);

        // Compare guessed number with generated number
        if (guess > number)
            printf("Too High!\n");
        else if (guess < number)
            printf("Too Low!\n");
        else
            printf("Congratulations! You guessed the correct number.\n");

    } while (guess != number);

    return 0;
}