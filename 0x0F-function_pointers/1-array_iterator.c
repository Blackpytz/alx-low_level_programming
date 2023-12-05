#include "function_pointers.h"

/**
* array_iterator - Function that executes a function given as a parameter on
* each element of an array.
* @array: Pointer to an array of integers.
* @size: Size of the array.
* @action: Function pointer that accepts a single argument.
*
* Return: Nothing.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
