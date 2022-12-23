#include "main.h"

/**
 * string_toupper - changes all lowercase letters
 * of a string to uppercase
 * @c: Parameter
 *
 * Return: Always 0.
 *
 * Declare an int c and initalize it to 0
 * WHILE 0 != '\0'
 *	IF string letters is lower case,
 *	subtract by 32
 *	iterate and increase c by 1;
 *	RETURN c.
 */

char *string_toupper(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] += ('A' - 'a');
		}
		c++;
	}

	return (c);
}
