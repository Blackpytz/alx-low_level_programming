#include "main.h"

/**
* _strdup - function that returns a pointer to a newly allocated space
* int memory, which contains a copy of the string give as parameter
* @str: pointer to the sting to be copied
*
* Return: A pointer to the duplicated string, or NULL if
* insufficient memory was available.
*/
char *_strdup(char *str)
{
	char *ptr;
	unsigned int size = 0, i;

	if (str == NULL)
		return (NULL);
	while (*str)
	{
		size++;
		str++;
	}
	ptr = malloc(1 + (size * sizeof(char)));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = str[i];

	return (ptr);
}
