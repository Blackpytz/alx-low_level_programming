#include "main.h"

/**
* _islower - function that checks for lowercase character
* @c: character to be ckecked
*
* Return: 1 if c is lowercase OR o otherwise
*/
int _islower(int c)
{
	int alphabet = 97;

	while (alphabet <= 122)
	{
		if (c == alphabet)
		{
			return (1);
		}
		alphabet++;
	}
	return (0);
}
