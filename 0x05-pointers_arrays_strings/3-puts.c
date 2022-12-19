#include "main.h"

/**
 * _puts - prints a string
 * @str: Parameter
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
