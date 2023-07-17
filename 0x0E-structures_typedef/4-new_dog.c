#include "dog.h"
#include <stdlib.h>

/**
* new_dog - function that creates a new dog
* @name: a pointer to an array of characters
* @age: a float variable
* @owner: a pointer to an array of characters
*
* Return: NULL if function fails or the struct memory address
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);

	return (d);
}
