#include "lists.h"

/**
* add_nodeint_end - Function that adds a new node at
* the end of a listint_t list.
* @head: Pointer to a pointer that points to a struct.
* @n: Constant integer.
*
* Return: Address of the new element, or NULL if it failed.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = new_node;
	return (new_node);
}
