#include "main.h"

/**
* _memset - Function that fills memory with a constant byte.
* @s: Pointer to the string to be filled.
* @b: Constant byte that fills string s.
* @n: The first n bytes of the memory area pointed to by s.
*
* Return: A pointer to the memory area s.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	index = 0;
	for (; index < n; index++)
		s[index] = b;

	return (s);
}
