#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: Parameter.
 *
 * Return: 1 if n is greater than zero,
 * 0 if n is zero,
 * -1 if n is less than Zero.
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
		_putchar('-');
	return (-1);
}
