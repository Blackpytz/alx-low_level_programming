#include "main.h"

/**
* _strcat - function that concatenates two strings
* @dest: Pointer to the first string to be appended
* @src: Pointer to the second string to be appended
*
* Return: Pointer to the resulting string dest.
*/
char *_strcat(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (dest[len])
		len++;

	for (i = 0; src[i]; i++)
		dest[len + i] = src[i];
	dest[len + i + 1] = '\0';

	return (dest);
}
