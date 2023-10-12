#include "main.h"

/**
* _isupper - function that checks for uppercase character
* @c: parameter to check for uppercase character
*
* Return: 1 if c is uppercase OR 0 otherwise
*/
int _isupper(int c)
{
	int alphabet = 'A';

	while (alphabet <= 'Z')
	{
		if (c == alphabet)
			return (1);
		alphabet++;
	}
	return (0);
}
