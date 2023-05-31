#include "main.h"

/**
*_strncat - concatenates two strings
*@dest: pointer to the string to be overwritten
*@src: pointer to the string to be appended to the string dest
*@n: bytes from src
*Return: A pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len = 0;

	while (src[dest_len] != '\0')
		dest_len++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
