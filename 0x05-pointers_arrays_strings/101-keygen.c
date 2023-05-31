#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - generates random passwords for 101-crackme
*Return: On suceess 0.
*/
int main(void)
{
	int min = 1000;
	int max = 9999;
	int randNum;

	srand(time(0));

	randNum = (rand() % (max - min + 1)) + min;

	printf("%d", randNum);

	return (0);
}
