#include "main.h"

/**
* _strncpy - Function that copies a file.
* @dest: Pointer to the first string to be copied.
* @src: Pointer to the second string to be copied.
* @n: Bytes of src.
*
* Return: A pointer to dest.
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
