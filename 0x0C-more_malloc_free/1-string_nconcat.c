#include "main.h"
#include <string.h>

/**
* string_nconcat - function that concatenates two strings
* @s1: a pointer array of characters
* @s2: a pointer array of characters
* @n: bytes of s2
*
* Return: A pointer to the newly allocated space in memory
* OR null on failure.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int total_len, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	total_len = strlen(s1) + strlen(s2) + 1;

	ptr = malloc(sizeof(char) * total_len);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(ptr + i) = *(s1 + i);
	for (j = 0; j < n; j++)
		*(ptr + i + j) = *(s2 + j);

	*(ptr + i + j) = '\0';

	return (ptr);
}
