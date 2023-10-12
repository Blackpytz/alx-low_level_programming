#include "main.h"

/**
* _isdigit - function that checks for a digit
* @c: parameter to be checked
*
* Return: 1 if c is a digit OR 0 otherwise
*/
int _isdigit(int c)
{
	int num = 48;

	for (; num <= 57; num++)
	{
		if (c == num)
			return (1);
	}
	return (0);
}
