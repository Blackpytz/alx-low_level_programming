#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: Parameter.
 *
 * Return: 1 if c is lowercase,
 * OR 0 otherwise.
 */
int _islower(int c)
{
	int alphabets = 97;

	while (alphabets <= 122)
	{
		if (alphabets == c)
		{
			_putchar(48);
		}
		else
			_putchar(47);
	}
	_putchar('\n');
	return (0);
}
