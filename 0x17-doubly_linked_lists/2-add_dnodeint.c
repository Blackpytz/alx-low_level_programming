#include "lists.h"

/**
* add_dnodeint - function that adds a new node at the beginning
* of a dlistint_t list.
* @head: pointer to a pointer that points to a dlistint_t node
* @n: constant integer
*
* Return: Address of the new element, or NULL if it failed.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head != NULL)
		new_node->prev = *head;
	*head = new_node;

	return (new_node);
}
