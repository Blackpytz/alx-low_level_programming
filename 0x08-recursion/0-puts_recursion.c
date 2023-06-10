#include "main.h"

/**
*_puts_recursion - function that prints a string
*@s: pointer to a sting
*Return: void.
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*(s + 1));
		_puts_recursion(*s);
	}
	_putchar('\n');
}
