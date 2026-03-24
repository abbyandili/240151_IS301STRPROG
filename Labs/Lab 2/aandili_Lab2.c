/* * Name: Abigail ANDILI
 * Student ID: 240151
 * Date: March 18, 206
 * Algorithm: Random number guesser game 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Renamed Function Prototypes
int get_input();
void show_win_text();
void show_hint(int current_guess, int secret_num);
void show_loss_text(int secret_num);

int main() {
    int secret_num, current_guess, attempt_count;
    int win_flag = 0;

    srand(time(NULL));
    // Pick a mystery number
    secret_num = (rand() % 20) + 1;

    printf("I am thinking of a number between 1 and 20.\n");
    printf("Can you guess what it\nis? ");

    // Main game loop (limit to 5 rounds)
    for (attempt_count = 1; attempt_count <= 5; attempt_count++) {
        current_guess = get_input();

        if (current_guess == secret_num) {
            show_win_text();
            win_flag = 1;
            break; 
        } else if (attempt_count < 5) {
            // Send the guess and the secret number to the hint function
            show_hint(current_guess, secret_num);
        }
    }

    if (!win_flag) {
        show_loss_text(secret_num);
    }

    return 0;
}

int get_input() {
    int val;
    scanf("%d", &val);
    return val;
}

void show_win_text() {
    printf("Congratulations! You did it.\n");
}

void show_hint(int current_guess, int secret_num) {
    // Logic: If guess is smaller than the secret, it's low.
    if (current_guess < secret_num) {
        printf("Your guess is low. Try\nagain: ");
    } else {
        printf("Your guess is high. Try\nagain: ");
    }
}

void show_loss_text(int secret_num) {
    printf("Sorry. The number was %d.\n", secret_num);
    printf("You should have gotten it by now.\n");
    printf("Better luck next time.\n");
}