#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number
 * @i: Argument
 *
 * Return: Always 0.
 */

int print_last_digit(int i)
{
	if (i != 0)
	{
		i %= 10;
	}
	return (i);
}
