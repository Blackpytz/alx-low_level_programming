#include "main.h"

/**
*puts_half - prints half of a string
*@str: pointer to the string to be printed half
*Return: void.
*/
void puts_half(char *str)
{
	int i, len, halfstr;

	len = 0;
	while (len[str] != '\0')
		len++;
	if (len % 2 == 1)
	{
		halfstr = (len - 1) / 2;
		for (i = 0; i < halfstr; i++)
			_putchar(str[halfstr]);
	}
	else
	{
		halfstr = len / 2;
		for (i = 0; i < halfstr; i++)
			_putchar(str[halfstr]);
	}
	_putchar('\n');
}
