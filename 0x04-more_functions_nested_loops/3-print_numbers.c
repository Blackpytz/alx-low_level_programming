#include "main.h"

/**
 * print_numbers - prints the numbers
 * from 0 to 9.
 *
 * Return: void.
 */

int print_numbers(void)
{
	int j;
	int i = 0;

	while (i < 10)
	{
		j = 48;
		_putchar(j);
		i++;
	}
	_putchar('\n');
}
