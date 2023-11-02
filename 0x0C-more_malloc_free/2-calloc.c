#include "main.h"

/**
* _calloc - Function that allocates memory for an array, using malloc.
* @nmemb: length to allocate.
* @size: size of variable.
*
* Return: A pointer to the allocated memory or NULL on failure.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *cal;
	unsigned int i, total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	cal = malloc(total_size);
	if (cal == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
		cal[i] = 0;

	return (cal);
}
