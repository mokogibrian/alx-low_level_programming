#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>

/**
 *main - Entry point for program
 *
 * Description: Prints value of last digit of n
 *
 *return - Always zero (Success)
 */

int main(void) /*Entry point for program*/
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	printf("Last digit of %d is ", n);

	if (last_digit > 5)
		printf("%d and is greater than 5\n", last_digit);
	else if (last_digit == 0)
		printf("%d and is 0\n", last_digit);
	else
		printf("%d and is less than 6 and not 0\n", last_digit);
	return (0);
}


