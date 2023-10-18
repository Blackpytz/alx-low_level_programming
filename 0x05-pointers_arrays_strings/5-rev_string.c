#include "main.h"

/**
* rev_string - Function that reverses a string
* @s: Pointer to the string to be reversed.
*
* Return: Nothing.
*/
void rev_string(char *s)
{
	char temp;
	int len = 0, i;

	while (s[len])
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
