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
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
