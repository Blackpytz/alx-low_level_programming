#include "main.h"

/**
* _strcmp - Function that compares two strings.
* @s1: Pointer to the first string to be compared.
* @s2: Pointer to the second string to be compared.
*
* Return: the result if s1 < s2 || s1 > s2 OR 0 if s1 == s2.
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	for (; s1[i] && s2[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			return (*s1 - *s2);
		}
	}

	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else if (s1[i] == '\0')
		return (-s2[i]);
	else
		return (s1[i]);
}
