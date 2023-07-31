#include "lists.h"

/**
* add_node_end - function that adds a new node at he end of a list_t list
* @head: pointer to a pointer to a singly linked list
* @str: pointer to a string to be duplicated
*
* Return: the address of the new element, or NULL if it failed.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		current = *head;
		while (current != NULL)
		{
			current = new->next;
		}
		current = new;
	}
	printf("[%i] %s\n", head->len, head->str);

	return (new);
}
