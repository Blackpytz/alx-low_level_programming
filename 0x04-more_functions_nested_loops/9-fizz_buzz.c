#include "main.h"

/**
 * main - prints from 1 to 100
 *
 * Return: Always 0.
 */

int main(void)
{
	int x = 1;

	while (x <= 100)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", x);
		}
		x++;
		_putchar('\n');
	}

	return (0);
}
