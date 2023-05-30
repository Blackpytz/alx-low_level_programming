#include "main.h"

/**
*_strcpy - copies the string pointed to by src, including the terminating
*null byte (\0), to the buffer pointed to by dest.
*@dest: pointer to the string to insert src
*@src: pointer to the string to be copied
*Return: the pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
	int len1, len2;

	len1 = 0;
	while (len1[src] != '\0')
		len1++;
	for (len2 = 0; dest[len2] != '\0'; len2++)
	{
		dest[len2 + len1] = src[len1];
	}
	dest[len2 + len1 + 1] = '\0';

	return (dest);
}
