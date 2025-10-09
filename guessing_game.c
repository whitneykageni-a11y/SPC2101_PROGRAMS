/*
Name:Whitney Kageni
Reg No:CT101/G/26543/25
Description:A program that prompts the user to guess a number until its correct
*/
#include <stdio.h>

int main() {
    int secret_number = 12;
    int guessed_number;
    int number_of_guesses = 0;

    printf("Enter your guess: ");
    scanf("%d", &guessed_number);

    while (guessed_number != secret_number) {
        number_of_guesses++;

        if (guessed_number > secret_number) {
            printf("Too high! : ");
        } else {
            printf("Too low! : ");
        }

        scanf("%d", &guessed_number);
    }

    number_of_guesses++;
    printf("Congratulations! You guessed it in %d tries.\n", number_of_guesses);

    return 0;
}
