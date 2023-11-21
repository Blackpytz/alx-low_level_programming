#include "lists.h"

/**
* print_listint - Function that prints all the elements of a listint_t list.
* @h: Pointer to a struct.
* Return: the number of nodes.
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *curr = h;
	size_t i = 0;

	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		i++;
		curr = curr->next;
	}
	return (i);
}
