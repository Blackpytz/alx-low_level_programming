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
	void *array;i
	char *char_array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(sizeof(unsigned int) * size);
	if (array == NULL)
		return (NULL);

	char_array = array;
	for (i = 0; i < nmemb * size; i++)
		char_array[i] = 0;

	return (char_array);
}
