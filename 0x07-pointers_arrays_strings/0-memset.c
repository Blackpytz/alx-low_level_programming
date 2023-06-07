#include "main.h"

/**
* _memset - function that fills memory with a constant byte
*@s: a pointer to the string to be filled with constant byte 'b'
*@b: constant byte that fills the first 'n' bytes of memory
*@n: bytes from string 's' to be filled
*Return: A pointer to the memory area s.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
