#include "main.h"

/**
* _isalpha - function that checks for alphabetic character
* @c: character to be checked
*
* Return: 1 if c is a letter, lowercase or uppercase
* OR 0 otherwise.
*/
int _isalpha(int c)
{
	int lowercase = 97, uppercase = 65;

	while (lowercase <= 122)
	{
		if (c == lowercase)
			return (1);
		lowercase++;
	}

	while (uppercase <= 90)
	{
		if (c == uppercase)
			return (1);
		uppercase++;
	}

	return (0);
}
