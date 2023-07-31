#include "lists.h"

/**
* listint_len - function that returns the number of elements
* in a linked listint_t list.
* @h: singly linked list
*
* Return: Number of elements
*/
size_t listint_len(const listint_t *h)
{
	unsigned int elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
