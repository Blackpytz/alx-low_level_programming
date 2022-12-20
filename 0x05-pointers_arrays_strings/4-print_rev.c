#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: Argument
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	while (x--)
	{
		putchar(s[x]);
	}
	putchar('\n');
}
