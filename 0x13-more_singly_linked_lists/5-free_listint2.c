#include "lists.h"

/**
* free_listint2 - function that frees a listint_t list
* @head: singly linked list
*
* Return: Nothing.
*/
void free_listint2(listint_t **head)
{
	listint_t *temp = *head, *aux;

	while (head != NULL)
	{
		aux = temp;
		temp = temp->next;
		free(aux);
	}
	*head = NULL;
}
