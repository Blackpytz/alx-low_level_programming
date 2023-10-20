#include "main.h"

/**
* string_toupper - Function that changes all lowercase letters
* of a string to uppercase.
* @str: Pointer to the string to be changed.
*
* Return: A pointer to str.
*/
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	}

	return (str);
}
