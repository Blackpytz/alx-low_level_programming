#include <stdio.h>

/**
 * main - prints the size of various types on the computer it is compiled
 *
 * Return: 0
 */

int main(void)
{
	char i = 'A';
	int j = 23;
	long int h = 100;
	long long int k = 3493;
	float l = 9.33;

	printf("Size of a char: %u byte(s)\n", sizeof(i));
	printf("Size of an int: %u byte(s)\n", sizeof(j));
	printf("Size of a long int: %u byte(s)\n", sizeof(h));
	printf("Size of a long long int: %u byte(s)\n", sizeof(k));
	printf("Size of a float: %u byte(s)\n", sizeof(l));

	return (0);
}
