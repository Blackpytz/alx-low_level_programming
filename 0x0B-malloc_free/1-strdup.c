#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  a function that returns a pointer to a newly
 * allocated space in memory.
 * @str: Parameter.
 *
 * Return: REturn a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *dd;
	int x, y;

	if (str == NULL)
		return (NULL);
	x = 0;

	while (str[x] != '\0')
	{
		x++;
	}
	dd = malloc(sizeof(char) * (x + 1));

	if (dd == NULL)
		return (NULL);
	for (y = 0; str[y]; y++)
	{
		dd[y] = str[y];
	}

	return (dd);
}
