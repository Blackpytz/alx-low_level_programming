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
	{}
	else if (d->name == NULL)
	{
		printf("(nil)\n");
	}
	else if (d->owner == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
