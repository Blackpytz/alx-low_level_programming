#include "lists.h"

/**
* pop_listint - function that deletes the head node of a listint_t linked list,
* and returns the head node’s data (n).
* @head: singly linked list
*
* Return: the head node’s data (n).
*/
int pop_listint(listint_t **head)
{
	int i;
	listint_t *current;

	i = (int)(*head)->n;
	current = *head;
	*head = current->next;
	free(current);

	return (i);
}
