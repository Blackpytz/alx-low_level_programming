#include "main.h"

/**
*cap_string - capitalizes all words of a string
*@c: a pointer to a string
*Return: Pointer to the resulting string.
*/
char *cap_string(char *c)
{
	int i, capitalize = 1;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			if (capitalize)
				a[i] -= 32;
			capitalize = 0;
		}
		else if (c[i] == ' ' || c[i] == '\t' || c[i] == '\n' ||
			c[i] == ',' || c[i] == ';' || c[i] == '.' ||
			c[i] == '!' || c[i] == '?' || c[i] == '"' ||
			c[i] == '(' || c[i] == ')' || c[i] == '}' ||
			c[i] == '}')
		{
			capitalize = 1;
		}
	}
	return (c);
}
