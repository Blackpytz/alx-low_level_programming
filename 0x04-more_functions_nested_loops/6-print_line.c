#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: Argument
 *
 * Return: Always 0.
 */

void print_line(int n)
{
	int x;

	for (x = 1; x <= n; x++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
