#include "main.h"

/**
* binary_to_uint - function that converts a binary number to an unsigned int.
* @b: pointer to a string to be converted
*
* Return: The converted number, or 0 if there is one or more chars
* in the string b that is not 0 or 1.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int dnum = 0, place_value = 1;
	const char *end;

	if (!b)
		return (0);

	end = b;
	while (*end != '\0')
	{
		end++;
	}

	while (end > b)
	{
		end--;

		if (*end != '0' && *end != '1')
			return (0);

		if (*end == '1')
			dnum += place_value;

		place_value *= 2;

	}
	return (dnum);
}
