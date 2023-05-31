#include "main.h"

/**
*string_toupper - changes all lowercase letters of a str to uppercase
*@c: pointer to the string to be changed to uppercase
*Return: A pointer to the resulting string.
*/
char *string_toupper(char *c)
{
	char result;
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (*c >= 97 && *c <= 122)
			result = *c - 32;
	}
	return (result);
}
