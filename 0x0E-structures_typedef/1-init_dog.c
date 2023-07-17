#include "dog.h"

/**
* init_dog - function that initialize a variable of type struct dog
* @d: struct variable to be initialized
* @name: a pointer to a string literal
* @age: float
* @owner: pointer to a string literal
*
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
