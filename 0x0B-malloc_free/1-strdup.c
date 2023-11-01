#include "main.h"

/**
* _strdup - Function that returns a pointer to a newly allocated space
* in memory, which contains a copy of the string given as a parameter.
* @str: Pointer to the string to be copied.
*
* Return: On success, a pointer to the duplicated string. it returns NULL
* if insufficient memory was available.
*/
char *_strdup(char *str)
{
	char *p;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	p = malloc((len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		p[i] = str[i];
	}
	p[len] = '\0';

	return (p);
}
