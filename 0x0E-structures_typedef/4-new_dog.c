#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
	int len1, len2;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	len1 = strlen(name);
	len2 = strlen(owner);
	
	d->name = malloc((sizeof(char) * len1)+1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc((sizeof(char) * len2)+1);
	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}

	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);

	return (d);
}
