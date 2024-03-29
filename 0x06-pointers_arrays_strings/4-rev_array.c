#include "main.h"

/**
* reverse_array - Function that reverses the content of an array of int
* @a: Pointer to the array to be reversed.
* @n: Lenght of the array.
*
* Return: Nothing.
*/
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
