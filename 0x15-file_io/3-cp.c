#include "main.h"

/**
* main - program that copies the content of a file to
* another file
* @ac: argument count
* @av: argument vector
*
* Return: Always 0.
*/
int main(int ac, char *av[])
{
	int fd1, fd2, n;
	char buf[BUFSIZE];
	mode_t mode = S_IRUSR | S_IWURS | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
	{
		dprinf(2, "Usage: cp file_from file_to");
		exit(97);
	}
	if ((fd1 = open(av[1], O_RDONLY, 0)) == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if ((fd2 = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, mode)) == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	while ((n = read(fd1, buf, BRFSIZE)) > 0)
		write(fd2, buf, n);
	if ((close(fd1) == -1) || (close(fd2) == -1))
		dprintf(2, "Error: Can't close fd %d\n", fd);
	return (0);
}
