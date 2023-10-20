#include "main.h"

/**
* cap_string - Function that capitalizes all words of a string.
* @str: Pointer to a string.
*
* Return: Pointer to str.
*/
char *cap_string(char *str)
{
	char cap[] = {' ', '\t', '\n', ',', ';', '.',
			'!', '?', '"', ')', '(', '{', '}'};
	int i, j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; cap[j]; j++)
		{
			if ((str[i - 1] == cap[j] || i == 0) &&
				(str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] = str[i] - 32;
				break;
			}
		}
	}

	return (str);
}
