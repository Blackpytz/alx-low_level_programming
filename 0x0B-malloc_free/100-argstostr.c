#include "main.h"

/**
* argstostr - function that concatenates all the arguments of your program
* @ac: argument count
* @av: argument vector
* Return: A pointer to a new string, or NULL if it fails.
*/
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, len = 0, index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (i = 0; av[i][j] != '\0'; i++)
			len++;
		len++;
	}

	ptr = malloc(1 + (len * sizeof(char)));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[index] = av[i][j];
			index++;
		}
		ptr[index] = '\n';
		index++;
	}
	ptr[index] = '\0';

	return (ptr);
}
