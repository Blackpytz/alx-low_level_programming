#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: Nothing.
 */

void times_table(void)
{
	int i,j,k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			_putchar(',');
			_putchar(' ');

			if (k >= 10)
			{
				_putchar(k / 10 + 48);
				_putchar(k % 10 + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(k + 48);
			}
		}
		_putchar('\n');
	}
}
