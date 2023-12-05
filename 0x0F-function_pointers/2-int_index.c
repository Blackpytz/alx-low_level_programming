#include "function_pointers.h"

/**
* int_index - Function that searches for an integer.
* @array: Pointer to an array of integers.
* @size: Size of the array.
* @cmp: Function pointer that accepts a single argument
*
* Return: The index of the first element for which the cmp function does
* not return 0 or -1 if no element matches.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
