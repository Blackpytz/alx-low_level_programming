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

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			k = i * j;
			putchar(k);

			if (j < 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
