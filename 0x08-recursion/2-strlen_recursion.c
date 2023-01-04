#include "main.h"

/**
 * _strlen_recursion - Prints the string length
 * @s: Parameter
 *
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		return (i + 1 + _strlen_recursion(s + 1));
	}
	return (i);
}
