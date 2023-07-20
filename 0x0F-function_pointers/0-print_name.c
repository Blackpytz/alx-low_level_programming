#include "function_pointers.h"

/**
* print_name - function that prints a name
* @name: pointer to an array of character
* @f: pointer to a function
*
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	f(name + i);
}
