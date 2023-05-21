#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Assign a rand num to the variable n each run time.
 *
 * Return: On success 0.
 */

int main(void)
{
	int n;
	int lastdigit = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	if (lastdigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
	else if (lastdigit < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
	else
		printf("Last digit of %d is %d and is 0\n", n, lastdigit);
	return (0);
}
