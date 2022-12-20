#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: Parameter
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	int x;

	x = 0;
	while (str[x])
	{
		if (str[x] % 2 == 0)
		{
			putchar(*str);
		}
		x++;
	}
	putchar('\n');
}
