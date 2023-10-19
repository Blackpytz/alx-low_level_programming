#include "main.h"

/**
* _strncat - Function that concatenates two strings
* @dest: Pointer to the first string to be appended.
* @src: Pointer to the second string to be appended.
* @n: Bytes from src.
*
* Return: A pointer to the resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;
	while (dest[len])
		len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i + 1] = '\0';

	return (dest);
}
