#include "lists.h"

/**
* pop_listint - Functionthat deletes the head node of a listint_t
* linked list.
* @head: Pointer to a pointer that points to a struct.
*
* Return: The head node's data (n).
*/
int pop_listint(listint_t **head)
{
	int i;
	listint_t *head_node = *head, *temp;

	if (*head == NULL)
		return (0);

	temp = head_node;
	i = head_node->n;
	*head = head_node->next;
	free(temp);
	return (i);
}
