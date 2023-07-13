#include "main.h"

/**
* _realloc - function that reallocates a memory block using malloc and free
* @ptr: a pointer to the memory previously allocated with a call to malloc
* @old_size: size in bytes of the allocated space for ptr
* @new_size: new size in bytes of the new memory block
*
* Return: the newly allocated space OR null on failure.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *old_ptr;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);

		old_ptr = ptr;
		for (i = 0; i < old_size; i++)
			*(new_ptr + i) = *(old_ptr + i);
		free(ptr);
		return (new_ptr);
	}
	return (ptr);
}
