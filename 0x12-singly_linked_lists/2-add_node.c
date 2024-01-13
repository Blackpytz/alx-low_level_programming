#include "lists.h"

/**
* add_node - function that adds a new node at the beginning of a list_t list.
* @head: pointer that points to a list
* @str: pointer to a string
*
* Return: the address of the new element,
* Or NULL if it failed.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *curr = malloc(sizeof(head));

	if (curr == NULL)
	{
		return (NULL);
	}

	curr->str = strdup(str);

	if (curr->str == NULL)
	{
		free(curr);
		return (NULL);
	}

	curr->len = strlen(str);
	curr->next = *head;

	*head = curr;

	return (curr);
}
