#include "main.h"

/**
*print_chessboard - function that prints the chessboard
*@a: 2d array
*Return: void.
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 1; i <= 8; i++)
	{
		for (j = 1; j <= 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
