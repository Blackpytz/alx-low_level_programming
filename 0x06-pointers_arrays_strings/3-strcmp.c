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

	for (; s1[i]; i++)
	{
		for (; s2[j]; j++)
		{
			if (*s1 == *s2)
			{
				return (n);
			}
			else if (*s1 < *s2)
			{
				n = *s1 - *s2;
				return (n);
			}
			else
			{
				n = *s1 - *s2;
				return (n);
			}
		}
	}
	return (0);
}
