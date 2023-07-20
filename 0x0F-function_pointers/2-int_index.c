#include "function_pointers.h"

/**
* int_index - function that searches for an integer
* @array: pointer to an array of ccharaccters
* @size: size of the arrayz
* @cmp: pointer to the function to be searched
*
* Return: void
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(*(array + i)))
			return (i);
	return (-1);
}
