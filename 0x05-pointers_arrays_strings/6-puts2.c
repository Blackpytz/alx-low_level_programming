#include "main.h"

/**
* puts2 - Function that prints every other character of a string
* starting with the first character.
* @str: Pointer to a string
*
* Return: Nothing.
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
