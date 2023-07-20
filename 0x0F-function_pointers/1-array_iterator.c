#include "function_pointers_h"

/**
* array_iterator - function that executes a function given as a
* parameter on each element of an array.
* @array: a pointer to an array of integers
* @size: size of array
* @action: pointer to the function to use
*
* Return: void.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	int i;

	for (i = 0; i < size; i++)
		action(array + 1);
}
