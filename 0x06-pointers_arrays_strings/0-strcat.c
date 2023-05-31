#include "main.h"

/**
*_strcat - concatenates two strings
*@dest: pointer to the string to be overwritten
*@src: pointer to the string to be appended to the string dest
*Return: A pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int i, len = 0;

	while (dest[len] != '\0')
		len++;
	for (i = 0; src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i + 1] = '\0';

	return (dest);
}
