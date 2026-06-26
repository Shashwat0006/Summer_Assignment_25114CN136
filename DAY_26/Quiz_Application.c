#include<stdio.h>

int main() {

    int answer;
    int score=0;
    printf("=====Simple Quiz Application=====\n");

    // Question 1
    printf("\n1.Capital of India?\n");
    printf("1.Mumbai\n2. Delhi\n3.Chennai\n4.Kolkata\n");
    printf("Enter your answer: ");
    scanf("%d",&answer);

    if (answer==2)
        score++;

    // Question 2
    printf("\n2. C language was developed by?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer==1)
        score++;

    // Question 3
    printf("\n3. Which symbol is used for comments in C?\n");
    printf("1. //\n2. ##\n3. <!-- -->\n4. **\n");
    printf("Enter your answer: ");
    scanf("%d",&answer);

    if (answer==1)
        score++;

    // Display final score
    printf("\nYour Final Score =%d/3\n",score);

    if (score==3)
        printf("Excellent!\n");
    else if (score==2)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

  
}