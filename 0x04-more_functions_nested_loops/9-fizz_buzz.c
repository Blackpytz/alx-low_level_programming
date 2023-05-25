#include "main.h"

/**
*main - prints the numbers from 1 to 100, followed by
*a new line. But for multiples of three print Fizz instead
*of the number and for the multiples of five point Buzz.
*for numbers which are multiples of both three and five print FizzBuzz.
*Return: On success 1.
*/
int main(void)
{
	char three[] = "Fizz";
	char five[] = "Buzz";
	char threefive[] = "FizzBuzz";
	int num;

	for (num = 1; num <= 99; num++)
	{
		if (num % 5 = 0 && num % 3 = 0)
			printf("%c ", threefive);
		else if (num % 5 = 0)
				printf("%c ", five);
		else if (num % 3 = 0)
				printf("%c ", three);
		else
			printf("%d ", num);
	}
	printf("%c\n", five);

	return (0);
}
