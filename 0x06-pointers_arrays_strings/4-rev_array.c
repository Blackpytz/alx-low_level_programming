#include "main.h"

/**
*reverse_array - reverses the content of an array of integers
*@a: pointer to the string to be reversed
*@n: number of elements of the array
*Return: NULL.
*/
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;
	}
}
