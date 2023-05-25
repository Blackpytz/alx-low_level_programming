#include "main.h"

/**
*_isupper - checks for uppercase character
*@c: character
*
*Return: 1 if c is uppercase
*Or 0 otherwise.
*/
int _isupper(int c)
{
	int alphabets = 65;

	while (alphabets >= 90)
	{
		if (alphabets == c)
			return (1);
		alphabets++;
	}
	return (0);
}
