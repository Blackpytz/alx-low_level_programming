#include "main.h"

/**
*leet - encodes a string into 1337
*@str: pointer to the string to be encoded
*Return: a pointer to the encodeed string
*/
char *leet(char *str)
{
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == s1[j])
				str[i] = s2[j];
		}
	}

	return (str);
}
