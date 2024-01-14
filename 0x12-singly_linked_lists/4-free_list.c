#include "lists.h"

/**
* free_list - function that frees a list_t list.
* @head: pointer to a list to be freed.
*/
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
