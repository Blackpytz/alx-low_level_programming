#include "main.h"

/**
*_strpbrk - function that searches a string for any of a set of bytes
*@s: pointer to the string to be checked for any of the bytes in the string
*accept
*@accept: pointer to the string that contain the bytes searched for in the
*string s
*Return: A pointer to the byte in s that matches one of the bytes in accept
*OR NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			
			}
		}
	}

	return (NULL);
}
