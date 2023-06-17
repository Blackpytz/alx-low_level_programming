#include "main.h"

/**
* _calloc - function that allocates memory of an array, using malloc
* @nmemb: array of integers
* @size: size of the array
*
* Return: A pointer to the allocated memory or NULL on failure.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);
	void *ptr;
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	char *char_ptr = ptr;
	unsigned int i;

	for (i = 0; i < nmemb * size; i++)
		char_ptr[i] = 0;

	return (ptr);
}
