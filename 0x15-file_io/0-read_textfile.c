#include "main.h"

/**
* read_textfile - function that reads a text file and prints it to
* the POSIX standard output.
* @filename: text file to be read
* @letters: number of letter it should read and print
*
* Return: The actual number of letters it could read and print
* or 0 on failure.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, count, read_file;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	read_file = read(fd, buffer, letters);
	if (read_file == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	buffer[read_file] = '\0';

	count = write(STDOUT_FILENO, buffer, read_file);
	free(buffer);
	close(fd);
	return (count);
}
