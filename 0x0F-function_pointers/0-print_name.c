#include "function_pointers.h"

/**
* print_name - function that prints a name
* @name: a pointer to an array of characters
* @f: pointer to a function
*
* Return: void.
*/
void print_name(char *name, void (*f)(char *))
{
	int len, i;

	len = strlen(name);
	for (i = 0; i < len; i++)
		f(name + i);
}
