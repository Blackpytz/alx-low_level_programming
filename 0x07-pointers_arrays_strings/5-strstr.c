#include "main.h"

/**
* _strstr - Function that locates a substring.
* @haystack: Pointer to the string to search.
* @needle: Pointerto the string substring to be found.
*
* Return: A pointer to the beginning of the located substring, or
* NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char found;
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		found = 1;
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i] == needle[j])
			{
				found = 0;
				continue;
			}
			else
				break;
		}
		if (!found)
			return (haystack + i);
	}
	return (NULL);
}
