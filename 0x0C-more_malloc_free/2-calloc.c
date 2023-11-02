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
	void *cal;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	cal = malloc(nmemb * size);
	if (cal == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		cal[i] = 0;

	return (cal);
}
