#include "main.h"

/**
* _strspn - Function that gets the length of a prefix substring.
* @s: Pointer to a string.
* @accept: Pointer to a string
*
* Return: The number of bytes in the initial segment of s which consist
* only of bytes from accept.
*/
unsigned int _strspn(char *s, char *accept)
{
	char found;
	unsigned int i, j, count = 0;

	for (i = 0; s[i]; i++)
	{
		found = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				found = 1;
				break;
			}
		}
		if (!found)
			break;
	}
	return (count);
}
