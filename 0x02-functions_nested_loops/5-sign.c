#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: Argument
 *
 * Return: Always 0 or 1.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
	}
	if (n == 0)
	{
		putchar('0');
	}
	if (n < 0)
	{
		putchar('-');
	}
}
