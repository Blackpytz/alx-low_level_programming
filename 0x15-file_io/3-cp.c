#include "main.h"

void close_file(int fd);

/**
* main - program that copies the content of a file to another file.
* @ac: argument count
* @av: argument vector
* Return: 0 on success.
*/
int main(int ac, char *av[])
{
	int fd_in, fd_out, bytes_read, bytes_write;
	char buffer[BUFSIZE];

	if (ac != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);
	fd_in = open(av[1], O_RDONLY);
	if (fd_in == -1)
		dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);
	fd_out = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_out == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		close_file(fd_in);
		exit(99);
	}
	while ((bytes_read = read(fd_in, buffer, BUFSIZE)) > 0)
	{
		bytes_write = write(fd_out, buffer, bytes_read);
		if (bytes_write != bytes_read)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			close_file(fd_in);
			close_file(fd_out);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		{
			close_file(fd_in);
			close_file(fd_out);
			exit(98);
		}
	}
	close_file(fd_in);
	close_file(fd_out);
	return (0);
}

/**
* close_file - function that closes a file
* @fd: file descriptor
*
* Return: void.
*/
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
