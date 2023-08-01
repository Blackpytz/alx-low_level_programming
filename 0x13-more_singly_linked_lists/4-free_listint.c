#include "lists.h"

/**
* free_listint - function that frees a listint_t list
* @head: singly linked list
*
* Return: Nothing.
*/
void free_listint(listint_t *head)
{
	free(head);
}
