#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: 0
 */

int main(void)
{
	int i = 48, j;

	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
			}
			if (!(i == 56 && j == 57))
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
