#include "lists.h"

/**
* get_nodeint_at_index - Function that returns the nth node of
* a listint_t linked list.
* @head: Pointer to a struct.
* @index: The index of the node, starting at 0.
* Return: The nth node or NULL if the node does not exist.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr = head;
	unsigned int i = 0;

	while (curr != NULL)
	{
		if (i == index)
			return (curr);
		i++;
		curr = curr->next;
	}
	return (NULL);
}
