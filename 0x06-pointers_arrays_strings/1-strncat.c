#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: Parameter
 * @src: Parameter
 * @n: parameter
 *
 * Return: Always 0.
 *
 * Declare two integers x and y
 * WHILE dest position != '\0'
 *	iterate and increase the position by 1
 *	WHILE src position > n bytes && != '\0'
 *		iterate and increase the position by 1
 *		dest element = src element
 *		increase the position of dest by 1
 *		dest position = '\0'
 *		return dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	for (; b < n && src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	dest[a] = '\0';

	return (dest);
}
