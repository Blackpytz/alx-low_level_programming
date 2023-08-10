#include "main.h"

/**
* main - program that copies the content of a file to
* another file
* @ac: argument count
* @av: argument vector
*
* Return: Always 0.
*/
int main(int ac, char **av)
{
	int fd1, fd2, n;
	char buf[BUFSIZE];
	mode_t mode = S_IRUSR | S_IWURS | S_IRGRP | S_IWGRP | S_IROTH;
	if (ac != 3)
	{
		dprinf(2, "Usage: cp file_from file_to");
		exit(97);
	}
}
