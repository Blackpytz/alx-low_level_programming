#include "main.h"

/**
*rev_string - reverses a string
*@s: pointer to a string to reverse
*Return: void.
*/
void rev_string(char *s)
{
	int len, i, temp;

	len = 0;
	while (len[s] != '\0')
		len++;
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
