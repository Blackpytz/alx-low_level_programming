#include "lists.h"

/**
* free_list - function that frees a list_t list
* @head: a singly linked list to be freed
*
* Return: void.
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
