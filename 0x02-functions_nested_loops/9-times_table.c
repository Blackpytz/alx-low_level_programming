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
			ttable = height * width;
			if (ttable <= 9)
			{
				_putchar('0' + ttable);
				if (width != 9)
					_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar('0' + ttable / 10);
				_putchar('0' + ttable % 10);
				if (width != 9)
					_putchar(',');
				_putchar(' ');
		}
			_putchar('\n');
	}
}
