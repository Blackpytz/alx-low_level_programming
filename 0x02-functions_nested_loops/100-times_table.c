#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: Argument
 *
 * Return: Always 0.
 *
 * declare int variable x, y and z
 * if n > 15 || n < 0
 * return.
 * for x < n
 * iterate and increase x by 1
 * for y < n
 * iterate and increase y by 1
 * z = x * y
 */

void print_times_table(int n)
{
	int x, y, z;

	if (n > 15 || n < 0)
		return;
	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			z = x * y;
			_putchar(',');
			_putchar(' ');
			if (n == 0)
			{
				_putchar(48);
				continue;
			}
			if (z > 99)
			{
				_putchar(z / 100 + '0');
				_putchar((z / 10) % 10 + '0');
				_putchar(z % 10 + '0');
			}
			else if (z > 9)
			{
				_putchar(' ');
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			}
		}
		_putchar ('\n');
	}
}
