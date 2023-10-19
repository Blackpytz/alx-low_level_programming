#include "main.h"

/**
* print_array - function that prints n elements of an
* array of integers
* @a: pointer to tha array of integers
* @n: number of elements of the array to be printed
*
* Return: Nothing.
*/
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
			printf("%d, ", *(a + i));
		printf("%d\n", a[i]);
	}
}
