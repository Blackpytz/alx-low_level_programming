#include "lists.h"

/**
* add_dnodeint_end - function that adds a new node at the end
* of a dlistint_t list.
* @head: pointer to a pointer that points to the head node.
* @n: constant integer
*
* Return: the address of the new element, or NULL if it failed.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr = *head;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (curr->next != NULL)
	{
		curr = curr->next;
	}

	new_node->prev = curr;
	curr->next = new_node;

	return (new_node);
}
