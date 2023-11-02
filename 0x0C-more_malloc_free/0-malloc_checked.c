#include "main.h"

/**
* malloc_checked - Function that allocates memory using malloc.
* @b: Size of to allocate using malloc.
*
* Return: A pointer to the allocated memory.
*/
void *malloc_checked(unsigned int b)
{
	int *num;

	num = malloc(b);
	if (num == NULL)
		exit(98);
	return (num);
}
