#include "lists.h"

/**
* listint_len - Function that returnssssss the number of elements in a linked
* listint_t list.
* @h: Pointer to a struct.
*
* Return: Number of elements.
*/
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
