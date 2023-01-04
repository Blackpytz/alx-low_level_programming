#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: string to be compared
 *
 * Return: pointer or MULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	i = 0;
	for (; haystack[i] != '\0'; haystack++)
	{
		if (*haystack == *needle)
		{
			return (needle);
		}
	}
	return (NULL);
}
