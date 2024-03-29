#include "main.h"

/**
* _strchr - Function that locates a character in a string.
* @s: Pointer to the string to be searched.
* @c: Character to search for.
*
* Return: A pointer to the first occurrence of the character c in
* the string s, or NULL if the character is not found.
*/
char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return ('\0');
}
