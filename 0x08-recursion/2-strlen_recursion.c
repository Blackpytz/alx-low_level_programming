#include "main.h"

/**
* _strlen_recursion - function that returns the length of a string
* @s: pointer to a string
*
* Return: length of the string s.
*/

int _strlen_recursion(char *s)
{
	int len = 1;

	if (*s++)
	{
		len = len + _strlen_recursion(s + 1);
		len++;
	}
	else
		len--;
	return (len);
}
