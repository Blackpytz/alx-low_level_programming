#include "main.h"

/**
 * _memcpy - copies memoery area
 * @dest: Parameter
 * @src: Parameter
 * @n: number of bytes
 *
 * Return: a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = src[i];
		i++;
	}
	return (dest);
}
