#include "main.h"

/**
* leet - function that encodes a string into 1337.
* @str: Pointer to the string to be encoded
*
* Return: On success the pointer to str.
*/
char *leet(char *str)
{
	char alphabets[] = "aeotlAEOTL";
	char numbers[] = "4307143071";
	int i, j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; alphabets[j]; j++)
		{
			if (str[i] == alphabets[j])
				str[i] = numbers[j];
		}
	}

	return (str);
}
