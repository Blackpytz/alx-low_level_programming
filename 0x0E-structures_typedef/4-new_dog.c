#include "dog.h"

/**
* new_dog - Function that creates a new dog.
* @name: Pointer to a char.
* @age: A float.
* @owner: Pointer to a char.
*
* Return: NULL if function fails or Pointer to the allocated space in memory.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ddog;

	ddog = malloc(sizeof(dog_t));
	if (ddog == NULL)
		return (NULL);

	ddog->name = malloc(sizeof(char) * strlen(name + 1));
	if (ddog->name == NULL)
	{
		free(ddog);
		return (NULL);
	}

	strcpy(ddog->name, name);
	ddog->age = age;
	ddog->owner = malloc(sizeof(char) * strlen(owner + 1));
	if (ddog->owner == NULL)
	{
		free(ddog->name);
		free(ddog);
		return (NULL);
	}
	strcpy(ddog->owner, owner);

	return (ddog);
}
