#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll() {
    int randomNum = (rand() % 6) + 1;
    printf("Roll: %d\n", randomNum);
}

int main() {
    char input;
    srand(time(NULL));

    do {
        roll();
        printf("Would you like to roll again? (y for yes) (any other key for quit): ");
        input = getchar();
        while (getchar() != '\n'); 
         
    } while (input == 'y');

    printf("Goodbye!");
    return 0;
}