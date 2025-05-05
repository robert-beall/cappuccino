#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	printf("Guess a number between 1 and 10\n");
	srand(time(NULL));
	int num = (rand() % 10) + 1;

	int guess = -1;

        do {
		printf("Enter your guess: ");
		scanf("%d", &guess);

		if (guess > num) {
			printf("Your guess is too high!\n");
		} else if (guess < num) {
			printf("Your guess is too low!\n");
		}
	} while (guess != num);
	printf("You guessed correctly!\n");
	return 0;
}
