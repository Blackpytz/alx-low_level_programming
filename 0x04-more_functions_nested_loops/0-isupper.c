#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: Argument
 *
 * Return: Always 0.
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
