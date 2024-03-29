#include "main.h"

/**
* print_rev - function that prints a string, in reverse
* @s: Pointer to the string to be reversed.
*
* Return: Nothing.
*/
void print_rev(char *s)
{
	int i = 0;

	while (*s)
	{
		s++;
		i++;
	}
	s--;

	while (i--)
	{
		_putchar(*s--);
	}
	_putchar('\n');
}
