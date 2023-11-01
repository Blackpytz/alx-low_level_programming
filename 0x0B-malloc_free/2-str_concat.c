#include "main.h"

/**
* str_concat - Function that concatenates two strings.
* @s1: Pointer to the first string to concatenate.
* @s2: Pointer to the second string to concatenate to s1.
*
* Return: NULL on failure or Pointer to the newly allocated space in
* memory which contains the contents of s1, followed by the contents
* of s2, and null terminated.
*/
char *str_concat(char *s1, char *s2)
{
	char *str;
	int size1 = 0, size2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[size1])
		size1++;
	while (s2[size2])
		size2++;

	str = malloc((size1 + size2 + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; j < size2; j++)
	{
		str[i + j] = s2[j];
	}
	str[i + j + 1] = '\0';

	return (str);
}
