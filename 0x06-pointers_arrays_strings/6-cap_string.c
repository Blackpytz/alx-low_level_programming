#include "main.h"

/**
*cap_string - capitalizes all words of a string
*@c: a pointer to a string
*Return: Pointer to the resulting string.
*/
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if ((c[i] == ' ' || c[i] == '\t' || c[i] == '\n' ||
			c[i] == ',' || c[i] == ';' || c[i] == '.' ||
			c[i] == '!' || c[i] == '?' || c[i] == '"' ||
			c[i] == '(' || c[i] == ')' || c[i] == '}' ||
			c[i] == '}') && (c[i+1] >= 'a' && c[i+1] <= 'z'))
		{
			c[i+1] = c[i+1] - 32;
		}
	}
	return (c);
}
