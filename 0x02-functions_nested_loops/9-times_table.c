#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: Void.
 */
void times_table(void)
{
	int height, width, ttable;

	for (height = 0; height <= 9; height++)
	{
		for (width = 0; width <= 9; width++)
		{
			if (width == 0)
			{
				_putchar(48);
				continue;
			}
			ttable = height * width;
			_putchar(',');
			_putchar(' ');
			if (ttable <= 9)
			{
				_putchar(' ');
				_putchar('0' + ttable);
			}
			else
			{
				_putchar('0' + ttable / 10);
				_putchar('0' + ttable % 10);
			}
		}
			_putchar('\n');
	}
}
