#include "lists.h"

/**
* add_nodeint_end - function that adds a new node at the
* end of a listint_t list.
* @head: singly linked list
* @n: parameter
*
* Return: Address of the new element of NULL on failure.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	new = (listint_t *head)malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	if (head == NULL)
	{
		*head = new;
	}
	else
	{
		current = *head;
		for (; current->next != NULL; current = current->next)
		{}
		*head = new;
	}
	return (head);
}
