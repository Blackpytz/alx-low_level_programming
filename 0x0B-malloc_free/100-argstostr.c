#include "main.h"
#include <string.h>

/**
* argstostr - Function that concatenates all the arguments of my program.
* @ac: Argument count.
* @av: Argument vector.
*
* Return: A pointer to a new string, or NULL if ti fails.
*/
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len = 0, pos = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += strlen(av[i]);

	str = malloc(sizeof(char) * (len + ac + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[pos++] = av[i][j];
		}
		str[pos++] = '\n';
	}
	str[pos] = '\0';

	return (str);
}
