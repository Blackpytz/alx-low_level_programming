#include "main.h"

/**
* create_array - function that creates an array of chars, and
* initializes it with a specific char.
* @size: size of the array
* @c: character to be initialized
*
* Return: A pointer to the array, or NULL if it fails.
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(c * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	free(ptr);

	return (ptr);
}
