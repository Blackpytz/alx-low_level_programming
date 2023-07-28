#include "lists.h"

/**
* list_len - function that returns the number of elements in a linked list_t list
* @h: singly linked list node
*
* Return: the number of elements in a linked list_t list
*/
size_t list_len(const list_t *h)
{
	unsigned int index = 0;

	while (h)
	{
		index++;
		h = h->next;
	}
	return (index);
}
