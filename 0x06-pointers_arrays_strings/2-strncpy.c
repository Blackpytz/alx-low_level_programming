#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: Parameter
 * @src: Parameter
 * @n: Parameter
 *
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	for (; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
