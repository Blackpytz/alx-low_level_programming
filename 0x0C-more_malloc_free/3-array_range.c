#include "main.h"

/**
* array_range - function that creates an array of integers
* @min: parameter
* @max: parameter
*
* Return: A pointer to the newly created array
* otherwise - NULL on failure.
*/
int *array_range(int min, int max)
{
	int *ptr, i, len = max - min + 1;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * len);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}
