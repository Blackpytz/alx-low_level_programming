#include "main.h"

/**
* _strlen - function that returns the lenght of a string
* @s: pointer to a string
*
* Return: the length of the string s.
*/
int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i); i++)
	{}
	return (i);
}
