#include "main.h"

/**
*_puts - prints a string
*@str: pointer to the string to print
*Return: null.
*/
void _puts(char *str)
{
	int len = 0;

	while (len[str] != '\0')
	{
		_putchar(len[str]);
		len++;
	}
	_putchar('\n');
}
