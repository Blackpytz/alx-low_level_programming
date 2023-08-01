#include "lists.h"

/**
* sum_listint - function that returns the sum of all the data (n)
* of a listint_t linked list.
* @head: singly linked list
*
* Return: the sum of all the data
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += (int)head->n;
		head = head->next;
	}

	return (sum);
}
