#include "main.h"

/**
* puts_half - Function that prints half of a string
* @str: Pointer to the string to be printed in half
*
* Return: Nothing.
*/
void puts_half(char *str)
{
	int len = 0, n, i;

	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = ((len - 1) / 2) + 1;
	}

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
