#include "main.h"

/**
*string_toupper - changes all lowercase letters of a str to uppercase
*@c: pointer to the string to be changed to uppercase
*Return: A pointer to the resulting string.
*/
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 97 && c[i] <= 122)
			c[i] = c[i] - 32;
	}
	return (c);
}
