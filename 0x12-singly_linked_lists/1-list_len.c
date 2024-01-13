#include "lists.h"

/**
* list_len - function that returns the number of elements in a
* linked list_t list.
* @h: pointer to a constant list.
*
* Return: the number of elements
*/
size_t list_len(const list_t *h)
{
	size_t lenght = 0;

	for (; h != NULL; h = h->next)
	{
		lenght++;
	}
	return (lenght);
}
