#include "function_pointers.h"

/**
* print_name - Function that prints a name.
* @name: Pointer to a string.
* @f: Function pointer that takes a single argument
*
* Return: Nothing.
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
