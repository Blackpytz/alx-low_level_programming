#include "main.h"

/**
* print_diagsums - function that prints the sum of the two diagonals
* of a square matrix of integers.
* @a: Pointer to the matrix.
* @size:size of the matrix.
*
* Return: Nothing.
*/
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, index;

	for (index = 0; index < size; index++)
	{
		sum1 += a[index * size + index];
		sum2 += a[index * size + (size - 1 - index)];
	}

	printf("%d, %d\n", sum1, sum2);
}
