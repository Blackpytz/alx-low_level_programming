#include "lists.h"

/**
* free_dlistint - function that frees a dlistint list.
* @head: pointer to the head node of a dlistint list.
*/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
