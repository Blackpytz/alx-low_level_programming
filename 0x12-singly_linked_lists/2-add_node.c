#include "lists.h"

/**
* add_node - function that adds a new node at the beginning of a list_t list
* @head: pointer to a struct linked list
* @str: pointer to a string to be duplicated
*
* Return: the address of the new element, or NULL if it failed.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->next = head;

	return (new);
}
