#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: Argument
 *
 * Return: void.
 */

void print_diagonal(int n)
{
	int x = 0, y;

	while (x < n)
	{
		for (y = 0; y < x; y++)
		{
			if (n <= 0)
			{
				_putchar('\n');
			}
			else
			{
			_putchar(' ');
			}
		}
		_putchar('\\');
		_putchar('\n');
		x++;
	}
}
