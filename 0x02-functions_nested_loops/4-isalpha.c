#include "main.h"

/**
 * _isalpha -  checks for alphabetic character.
 * @c: Argument
 *
 * Return: Always 0 or 1.
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
