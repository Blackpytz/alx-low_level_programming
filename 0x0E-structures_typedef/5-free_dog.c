#include "dog.h"
#include <stdlib.h>

/**
** free_dog - function that frees dogs
* @d: stuructur pointer to be freed
*
* Return: void
*/
void free_dog(dog_t *d)
{
	free(d);
	free(d->name);
	free(d->owner);
}
