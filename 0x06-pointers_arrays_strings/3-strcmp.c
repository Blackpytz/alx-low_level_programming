#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: Parameter
 * @s2: Parameter
 *
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2 && *s2 != *s1)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
