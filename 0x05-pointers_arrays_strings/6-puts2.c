#include "main.h"

/**
*puts2 - prints every other character of a string
*starting with the first character.
*@str: pointer to a character to print
*Return: void.
*/
void puts2(char *str)
{
	int len = 0;

	while (len[str] != '\0')
	{
		if (len % 2 == 0)
			_putchar(len[str]);
		len++;
	}
	_putchar('\n');
}
