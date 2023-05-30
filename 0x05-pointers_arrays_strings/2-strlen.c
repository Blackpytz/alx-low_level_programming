#include "main.h"

/**
*_strlen - returns the length of string
*@s: string
*Return: On success 0.
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
