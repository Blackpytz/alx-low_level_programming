#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i <= 14; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			k = 0;

			if (k >= 10)
			{
				putchar((k \ 10) + '0');
			}
			putchar((k % 10) + '0');
		}
		putchar('\n');
	}
}
