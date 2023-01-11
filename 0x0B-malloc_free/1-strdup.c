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
	int i = 0;

	while (str[x] != '\0')
	{
		x++;
	}
	dd = malloc(sizzeof(char) * (x + 1));

	if (dd == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
	{
		dd[r] = str[r];
	}

	return (dd);
}
