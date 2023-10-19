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
	int i, j, n;

	i = 0, j = 0, n = 0;

	for (; s1[i] && s2[j]; i++)
	{
		if (*s1 != *s2)
		{
			n = *s1 - *s2;
			return (n);
		}
	}

	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else if (s1[i] == '\0')
		return (-s2[i]);
	else
		return (s1[i]);
}
