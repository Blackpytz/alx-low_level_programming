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

	while ('\0' != s[x])
	{
		_putchar(*s);
		s--;
	}
	return (0);
}
