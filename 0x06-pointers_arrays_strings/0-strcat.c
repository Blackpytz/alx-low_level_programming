#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Parameter
 * @src: Parameter
 *
 * Return: Always 0.
 *
 * Declare two integers x, and y
 * WHIlE dest position is != '\0'
 *	iterate and increase position by 1
 *		WHILE scr position is != '\0'
 *		iterate and increase position by 1
 *		dest position = src position
 *		dest = '\0'
 *		return dest.
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	dest[x] = '\0';

	return (dest);
}
