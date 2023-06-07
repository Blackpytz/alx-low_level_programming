#include "main.h"

/**
*_strstr - function that locates a substring
*@haystack: pointer to a string to be checked for the substring
*needle
*@needle: pointer to the substring to be searched for in haystack
*Return: A pointer to the beginning of the located substring,
*OR null if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				return (haystack + i);
			}
		}
	}

	return (NULL);
}
