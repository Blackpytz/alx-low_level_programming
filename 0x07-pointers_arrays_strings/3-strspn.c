#include "main.h"

/**
*_strspn - function that gets the length of a prefix substring
*@s: pointer to a string to be checked for bytes from the string accept
*@accept: pointer to a string that contains bytes searched for in the initial
*segments of s
*Return: Number of bytes in the intial seg of s.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, num = 0;
	int match;

	for (i = 0; s[i] != '\0'; i++)
	{
		match = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				num++;
				match = 1;
			}
			break;
		}
		if (match == 0)
			break;
	}
	return (num);
}
