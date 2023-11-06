#include "dog.h"

/**
* init_dog - Function that initialize a variable of type struct dog
* @d: Structure pointer.
* @name: Pointer to a char.
* @age: A float.
* @owner: Pointer to a char.
*
* Return: Nothing.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = malloc(strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		exit(1);
	}
	strcpy(d->name, name);
	d->age = age;
	d->owner = malloc(strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		exit(1);
	}
	strcpy(d->owner, owner);
}
