#include "main.h"

/**
* string_nconcat - Function that concatenates two strings.
* @s1: Pointer to the first string to concatenate.
* @s2: Pointer to the second string to concatenate.
* @n: Number of bytes of s2.
*
* Return: Pointer to  the newly allocated space in memory containing s1,
* followed by the first n bytes of s2 or NULL on failure.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int size1, size2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size1 = strlen(s1);
	size2 = strlen(s2);

	if (n >= size2)
		n = size2;

	str = malloc(sizeof(char) * (size1 + n + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		str[i] = s1[i];

	for (j = 0; j < n; j++)
		str[i + j] = s2[j];
	str[i + j] = '\0';

	return (str);
}
