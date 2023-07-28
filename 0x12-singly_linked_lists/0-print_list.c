#include "lists.h"

/**
* print_list - function that prints all the elements of a list_t list
* @h: singly linked list node
*
* Return: the number of nodes.
*/
size_t print_list(const list_t *h)
{
	unsigned int index = 0;

	if (h->str == NULL)
		str = "[0] (nil)";

	while (h)
	{
		printf("[%d] %s\n", h->len, h->str);
		index++;
		h = h->next;
	}
	return (index);
}
