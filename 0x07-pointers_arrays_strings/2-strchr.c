#include "main.h"

/**
*_strchr - function that locates a character in a string
*@s: a pointer to a string to be searched for character 'c'
*@c: character
*Return: A pointer to the first occurrence of the character c
*OR null if the character is not found.
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		else
			return (NULL);
	}
	return (NULL);
}
