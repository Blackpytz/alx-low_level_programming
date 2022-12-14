#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: Nothing.
 */

void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			_putchar(' ');
			_putchar(k + 48);

			if (j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
