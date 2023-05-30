#include "main.h"

/**
*_atoi - convert a string to an integer
*@s: pointer to a string to be converted to integer
*Return: result of the converted string to integer.
*/
int _atoi(char *s)
{
	unsigned int i = 0, sign = 1, result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign = -sign;
		else if (s[i] >= 48 && s[i] <= 57)
			result = result * 10 + (s[i] - '0');
		else if (result > 0)
			break;
		i++;
	}

	return (sign * result);
}
