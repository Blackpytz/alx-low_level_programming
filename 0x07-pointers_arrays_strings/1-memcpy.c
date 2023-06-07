#include "main.h"

/**
*_memcpy - function that copies memory area
*@dest: pointer to a string that is to be filled with n bytes
*from memory area src
*@src: pointer to a string that is to be copied to memory area
*dest
*@n: number of bytes to be copied
*Return: A pointer to dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && dest[i] != '\0'; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
