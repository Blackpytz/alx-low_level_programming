#include "main.h"

/**
*_strncpy - copies a string
*@dest: pointer to the string to be overwritten
*@src: pointer to the string to be copied to the string dest
*@n: bytes from src
*Return: A pointer to the resulting dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
