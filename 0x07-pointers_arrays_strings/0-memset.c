#include "main.h"

/**
 * _memset - fills the memory with constant byte
 * @s: Parameter
 * @b: Parameter
 * @n: Parameter
 *
 * Return: a pointer to memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	putchar('\n');

	return (s);
}
