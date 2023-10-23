#include "main.h"

/**
* _memcpy - Function that copies memory area.
* @dest: Pointer to the string to be filled.
* @src: Pointer to the memoru area that fills the string dest.
* @n: Number of bytes fom src to be copied.
*
* Return: A pinter to dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	for (; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	return (dest);
}
