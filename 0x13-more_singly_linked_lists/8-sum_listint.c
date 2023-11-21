#include "lists.h"

/**
* sum_listint - function that returns the sum of all the data (n) of a
* listint_t linked list.
* @head: Pointer to a struct.
*
* Return: The sum 0r 0 if list is empty.
*/
int sum_listint(listint_t *head)
{
	listint_t *curr = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
