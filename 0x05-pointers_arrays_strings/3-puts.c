#include <unistd.h>
#include "main.h"

/**
* _puts - function that prints a string.
* @str: Pointer ot the string to be printed
*
* Return: Nothing
*/
void _puts(char *str)
{
	int len = 0;

	while (*(str + len))
	{
		len++;
	}

	write(1, str, len);
	_putchar('\n');
}
