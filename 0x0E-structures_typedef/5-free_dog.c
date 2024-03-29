#include "dog.h"
#include <stdlib.h>

/**
* free_dog - Fucntion that frees dogs.
* @d: Pointer to the structured to be freed.
*
* Return: void.
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
