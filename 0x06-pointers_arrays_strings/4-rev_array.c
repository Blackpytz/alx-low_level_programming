#include "main.h"

/**
*reverse_array - reverses the content of an array of integers
*@a: pointer to the string to be reversed
*@n: number of elements of the array
*Return: NULL.
*/
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; a[i] != '\0'; i++)
	{}
	for (j = 0; j < n; j++)
	{
		a[j] = a[i];
		i--;
	}
}
