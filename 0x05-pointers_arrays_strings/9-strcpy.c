#include "main.h"

/**
* _strcpy - Function that copies the string pointed to by src,
* including the terminating null byte (\0), to the buffer pointed
* to by dest.
* @dest: Pointer to the string to copy the string src
* @src: Pointer to the string to be copied
*
* Return: Pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (src[len])
		len++;

	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i + 1] = '\0';

	return (dest);
}
