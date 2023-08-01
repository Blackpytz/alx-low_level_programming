#include "lists.h"

/**
* insert_nodeint_at_index - function that inserts a new node
* at a given position
* @head: singly linked list
* @idx: index of the list where the new node should be added
* @n: value to be inserted in the singly linked list
*
* Return: The address of the new node, or NULL if it failed.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int i;
	listint_t *new, *current;

	if (head == NULL || *head == NULL)
		return (NULL);

	current = *head;
	new = (*head)malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	for (i = 0; i < idx && current->next != NULL; i++, current = current->next)
	{}

	new->next = current->next;
	current->next = new;

	return (new);
}
