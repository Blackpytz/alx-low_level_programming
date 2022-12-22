#include <stdio.h>

/**
 * main - prints all possible different
 * combinations of three digits.
 *
 * Return: Always 0.
 */

int main(void)
{
	int a = 48, b = 48, c = 48;

	while (a < 58)
	{
		while (b < 58)
		{
			while (c < 58)
			{
				if (a != b && b != c && a != c && a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (!(a == 55 && b == 56 && c == 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			b++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
