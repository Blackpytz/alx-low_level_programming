#include "main.h"

/**
* print_binary - function that prints the binary representation of a
* number.
* @n: integer to be converted to binary
*
* Return: Void
*/
void print_binary(unsigned long int n)
{
	/* base case: number is 0 */
	if (n == 0)
		return;

	/* recursive call: shift the bits to the right by 1 */
	print_binary(n >> 1);

	/* print the last bit of the number */
	_putchar((n & 1) ? '1' : '0');
}
