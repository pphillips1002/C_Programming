#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score = 95;
    int big = 90;

    //simple statement if, no brackets
    if (score > big)
        printf("Jackpot!\n");
    //compound statement if, brackets
    if (score > big)
    {
        score++;
        printf("You win\n");
    }

    //Checking if number is even or odd, if else
    int number_to_test,remainder;

    printf("Enter your number to be tested: ");
    scanf("%i",&number_to_test);

    remainder = number_to_test % 2;
        if (remainder==0) {
            printf("The number is even.\n");
        }
        else {
            printf("The number is odd.\n");
        }

     //Sign function, else if
     int number,sign;

     printf("Please type in a number: ");
     scanf("%i",&number);

     if (number < 0) {
        sign = -1;
     }
     else if (number == 0) {
        sign = 0;
     }
     else { //Must be positive
        sign = 1;
     }

    printf("Sign = %i\n",sign);

    //nested if else
    int gameIsOver = 0;
    char playerToMove = 'Y';
    if (gameIsOver == 0) {
        if (playerToMove == 'Y') {
            printf("Your Move.\n"); }
        else {
            printf("My Move.\n");
        }
    }
    else {
        printf("The game is over.\n");
    }

    //shorthand if else ternary operator
    int x = 8;
    int y = 8;
    x = y > 7 ? 25 : 50;
    printf("%d",x);


        return 0;


}
