#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: Parameter.
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 * OR 0 otherwise.
 */
int _isalpha(int c)
{
	int alphabets;

	for (alphabets = 65; alphabets <= 90; alphabets++)
	{
		if (c == alphabets)
			return (1);
	}
	alphabets = 97;
	for (; alphabets <= 122; alphabets++)
	{
		if (c == alphabets)
			return (1);
	}

	return (0);
}
