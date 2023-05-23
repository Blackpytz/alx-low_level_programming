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
	int alphabets;

	for (alphabets = 97; alphabets <= 122; alphabets++)
	{
		if (c == alphabets)
		{
			return (1);
		}
	}
	return (0);
}
