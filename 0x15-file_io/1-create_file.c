#include "main.h"

/**
* create_file - function that creates a file
* @filename: name of the file to create
* @text_content: string to wite to the file
*
* Return: 1 on succes, -1 on failue
*/
int create_file(const char *filename, char *text_content)
{
	char *buffer;
	int fd, len = 0, i = 0;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (!filename)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (*text_content++)
		len++;
	buffer = malloc(sizeof(char) * len + 1);
	if (buffer == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY, mode);
	if (fd == -1)
	{
		free(buffer);
		return (-1);
	}
	while (text_content[i])
	{
		buffer[i] = text_content[i];
		i++;
	}
	write(STDOUT_FILENO, buffer, len);

	free(buffer);
	close(fd);
	return (1);
}
