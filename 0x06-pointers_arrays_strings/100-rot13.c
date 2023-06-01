#include "main.h"

/**
*rot13 - encodes a string using rot13
*@str: pointer to the string to be encoded
*Return: A pointer to the encode string
*/
char *rot13(char *str)
{
	char s1[] = "aAbBcCdDeEfFgGhHiIjJkKlLmM";
	char s2[] = "nNoOpPqQrRsStTuUvVwWxXyYzZ";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (str[i] == s1[j])
				str[i] = s2[j];
			else if (str[i] == s2[j])
				str[i] = s1[j];
		}
	}

	return (str);
}
