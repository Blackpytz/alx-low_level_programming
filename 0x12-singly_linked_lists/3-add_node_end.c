#include "lists.h"

/**
* add_node_end - function that adds a new node at the end of a list_t list.
* @head: pointer to a pointer that points to a list_t list.
* @str: pointer to a string.
*
* Return: the address of the new element,
* Or NULL if it failsed.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list = malloc(sizeof(list_t));
	list_t *curr = NULL;

	if (new_list == NULL)
	{
		return (NULL);
	}

	new_list->str = strdup(str);

	if (new_list->str == NULL)
	{
		free(new_list);
		return (NULL);
	}

	new_list->len = strlen(str);
	new_list->next = NULL;

	if (*head == NULL)
	{
		*head = new_list;
		return (new_list);
	}
	curr = *head;

	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = new_list;

	return (new_list);
}
