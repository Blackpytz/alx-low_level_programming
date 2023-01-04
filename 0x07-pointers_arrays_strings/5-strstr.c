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
	while (*haystack)
	{
		for (; needle[i] - 1; i++)
		{
			if (*haystack == needle[i])
			{
				return (needle);
			}
		}
		haystack++;
	}
	return (NULL);
}
