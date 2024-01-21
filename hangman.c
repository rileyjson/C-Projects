#include <stdio.h>
#include <string.h>

char word[] = "riley";
int numGuesses = 0;

int guessWord() {
    int guessWrong = 1;
    char guessed[6];
    strcpy(guessed, "XXXXX");

    while (guessWrong != 7) {
        printf("%s\n", guessed);
        char userInput[2];
        printf("Guess a letter: ");
        scanf("%s", userInput);

        if (strchr(word, userInput[0]) != NULL) {
            printf("Good Guess!\n");

            for (int i = 0; i < strlen(word); i++) {
                if (word[i] == userInput[0]) {
                    guessed[i] = userInput[0];
                }
            }

            if (strcmp(word, guessed) == 0) {   // Compares the two strings character by character
                                                // it returns 0 when they're =
                printf("You win! The word was %s\n", word);
                exit(1);
            }

        } else {
            printf("Incorrect, Guess again %d / 6\n", guessWrong);
            guessWrong++;
        }

        if (guessWrong == 7) {
            printf("You lost!\n");
            
        }
    }
}

int main() {
    printf("Welcome to Hangman!\n");
    guessWord();

    return 0;
}
