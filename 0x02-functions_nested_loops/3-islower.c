#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: Argument
 *
 * Return: Always 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
