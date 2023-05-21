#include <stdio.h>
/**
 * main - Prints all possible different combination of two digits.
 *
 * Return: On success 0.
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i < j || i != j)
			{
				putchar(i);
				putchar(j);
				if (j != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
