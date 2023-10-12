#include "main.h"

/**
* main - program that prints the numbers from 1 to 100, but for multiples
* of three print Fizz instead of the number and for the nultiples of
* five print Buzz. FOr numbers which are multiples of both three and
* five print FizzBuzz.
*
* Return: 0 on sucess.
*/
int main(void)
{
	char cWord1[] = "Fizz";
	char cWord2[] = "Buzz";
	char cWord3[] = "FizzBuzz";
	int i;

	for (i = 1; i <= 99; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("%s ", cWord3);
		else if (i % 3 == 0)
			printf("%s ", cWord1);
		else if (i % 5 == 0)
			printf("%s ", cWord2);
		else
			printf("%d ", i);
	}
	printf("%s\n", cWord2);
	return (0);
}
