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

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
