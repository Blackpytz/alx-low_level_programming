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

	for (;alphabets <= 90; alphabets++)
	{
		if (c == alphabets)
			return (1);
	}
	return (0);
}
