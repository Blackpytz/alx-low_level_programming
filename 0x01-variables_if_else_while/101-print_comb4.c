#include <stdio.h>

/**
 * main - prints all possible different
 * combinations of three digits.
 *
 * Return: Always 0.
 */

int main(void)
{
	int a, b, c = 48;

	while (a < 58)
	{
		while (b < 58)
		{
			while (c < 58)
			{
				if (a != b && b != i && a != i && a < b && b < c)
				{
					_putchar(a);
					_putchar(b);
					_putchar(c);
					if (!(a == 55 && b == 56 && c == 57))
					{
						_putchar(',');
						_putchar(' ');
					}
				}
				c++;
			}
			b++;
		}
		c++;
	}
	_putchar('\n');
	return (0);
}
