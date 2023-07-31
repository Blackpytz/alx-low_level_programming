#include "lists.h"

/**
* print_listint - function that prints all the elements
* of a listint_t list
* @h: singly linked list
*
* Return: the number of nodes.
*/
size_t print_listint(const listint_t *h)
{
	unsigned int elements = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		elements++;
		h = h->next;
	}

	return (elements)
}
