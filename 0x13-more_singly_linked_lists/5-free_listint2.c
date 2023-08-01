#include "lists.h"

/**
* free_listint2 - function that frees a listint_t list
* @head: singly linked list
*
* Return: Nothing.
*/
void free_listint2(listint_t **head)
{
	listint_t *temp = *head, *axu;

	while (head != NULL)
	{
		axu = temp->next;
		free(temp);
		temp = axu;
	}
	*head = NULL;
}
