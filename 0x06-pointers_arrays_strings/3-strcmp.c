#include "main.h"

/**
*_strcmp - compares two strings
*@s1: pointer to the first string
*@s2: pointer to the second string
*Return: On success 0.
*/
int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0, j = 0; s1[i] != '\0' && s2[j] != '\0'; i++, j++)
	{
		if (s[1] < s[2])
			return (s1[i] - s2[i]);
		else if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}
