#include "main.h"

/**
*rev_string - reverses a string
*@s: pointer to a string to reverse
*Return: void.
*/
void rev_string(char *s)
{
	int len;

	len = 0;
	while (len[s] != '\0')
		len++;
	while (*s++)
	{
		*s = len[s];
		len--;
	}
}
