#include "main.h"

/**
* _print_rev_recursion - Function that prints a string in reverse.
* @s: Pointer to the string to be print in reverse.
*
* Return: Nothing.
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
