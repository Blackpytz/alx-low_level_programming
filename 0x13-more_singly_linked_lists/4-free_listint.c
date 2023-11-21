#include "lists.h"

/**
* free_listint - Function n that frees a listint_t list.
* @head: Pointer to a struct.
*
* Return: Nothing.
*/
void free_listint(listint_t *head)
{
	listint_t *curr = head;
	listint_t *aux;

	while (curr != NULL)
	{
		aux = curr;
		curr = curr->next;
		free(aux);
	}
}
