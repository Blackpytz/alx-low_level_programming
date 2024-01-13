#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer to a constant list
 *
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
    if (h != NULL)
    {
         size_t num = 0;

        for (; h != NULL; h = h->next)
        {
            if (h->str == NULL)
                puts("[0] (nil)");
            else
                printf("[%d] %s\n", h->len, h->str);
            num++;
        }

        return (num);
    }
    return (0);
}