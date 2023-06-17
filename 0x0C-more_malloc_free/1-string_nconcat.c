#include "main.h"
#include <string.h>

/**
* string_nconcat - function that concatenates two strings
* @s1: pointer to the first string to be concatenated
* @s2: pointer to the second string to be concatenated
* @n: number of bytes of s2
*
* Return: A pointer to the allocated space in memory, which contains s1,
* followed by the first n bytes of s2, and null terminated
* or NULL on failure.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		len = strlen(s2);
	else if (n < strlen(s2))
		len = n;

	concat = malloc(sizeof(char) * (strlen(s1) + len + 1));
	if (concat == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];
	for (j = 0; j < len; j++)
		concat[i + j] = s2[j];
	concat[i + j] = '\0';

	return (concat);
}
