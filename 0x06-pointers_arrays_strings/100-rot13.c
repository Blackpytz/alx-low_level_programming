#include "main.h"

/**
*rot13 - encodes a string using rot13
*@str: pointer to the string to be encoded
*Return: A pointer to the encode string
*/
char *rot13(char *str)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int count, j;

	for (count = 0; *(str + count) != '\0'; count++)
	{
		for (j = 0; j < 52; j++)
		{
			if (*(str + count) == alphabet[j])
			{
				*(str + count) = rot13[j];
				break;
			}
		}
	}

	return (str);
}
