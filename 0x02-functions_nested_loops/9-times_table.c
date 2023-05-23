#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: Void.
 */
void times_table(void)
{
	int height, width = 0, ttable;

	for (height = 0; height <= 9; height++)
	{
		ttable = height * width;
		for (; width <= 9; width++)
		{
			_putchar('0' + ttable / 10);
			_putchar('0' + ttable % 10);
			_putchar(',');
			_putchar(' ');
		}
			_putchar('\n');
	}
}
