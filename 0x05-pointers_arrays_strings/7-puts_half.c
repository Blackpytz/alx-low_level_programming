#include "main.h"

/**
*puts_half - prints half of a string
*@str: pointer to the string to be printed half
*Return: void.
*/
void puts_half(char *str)
{
	int i, len, halflen;

	len = 0;
	while (len[str] != '\0')
		len++;
	if (len % 2 == 0)
	{
		halflen = len / 2;
	}
	else
	{
		halflen = (len + 1) / 2;
	}

	for (i = halflen; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
