#include "lists.h"

/**
* get_nodeint_at_index - function that returns the nth node of a listint_t
* linked list
* @head: singly linked list
* @index: unsigned integer
*
* Return: the nth node of a listint_t linked list.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	current = head;
	for (i = 0; i < index && current != NULL; i++, current = current->next)
	{}

	return (current);
}
