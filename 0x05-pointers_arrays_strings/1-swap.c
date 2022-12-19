#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: Parameter
 * @b: Parameter
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int **p = &a;
	*b = &a;
	*a = &p;
}
