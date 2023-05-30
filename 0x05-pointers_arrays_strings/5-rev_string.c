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
	while (len[s])
		len++;
	while (*s != '\0')
	{
		*s = len[s];
		s++;
		len--;
	}
}
