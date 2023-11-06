#include "dog.h"

/**
* print_dog - Function that prints a struct dog.
* @d: Pointer to a struct.
*
* Return: Nothing.
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)\n";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)\n";
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
