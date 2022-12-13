#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number
 * @i: Argument
 *
 * Return: Always 0.
 */

int print_last_digit(int i)
{
	int j;

	if (i < 0)
	{
		j = (i % 10) * -1;
	}
	else
	{
		j = i % 10;
	}
	_putchar('0' + j);
	_putchar('\n');

	return (j);
}
