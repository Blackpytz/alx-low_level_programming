#include "lists.h"

/**
* free_listint2 - Function that frees a listint_t list.
* @head: Pointer to a pointer that points to a struct.
*
* Return: Nothing.
*/
void free_listint2(listint_t **head)
{
	listint_t *aux, *curr;

	if (head == NULL)
		return;

	curr = *head;
	while (curr != NULL)
	{
		aux = curr;
		curr = curr->next;
		free(aux);
	}

	*head = NULL;
}
