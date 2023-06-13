#include "main.h"

/**
* str_concat - function that concatenates two strings
* @s1: pointer to the first string to be concatenated
* @s2: pointer to the second string to be concatenated
*
* Return: A pointer to a newly allocated space in memory which contains
* the contents of s1, followed by the contents of s2, and null terminated
* or NULL on failure.
*/
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i, j, len1, len2, size;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (s1[len1] != '\0');
		len1++;
	while (s2[len2] != '\0')
		len2++;
	size = len1 + len2 + 1;
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (1);
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < len2; j++)
		ptr[i + j] = s2[j];
	ptr[i + j + 1] = '\0';
	return (ptr);
}
