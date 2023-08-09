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
	int fd, len = 0;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (!filename)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	len = strlen(text_content);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, mode);
	if (fd == -1)
	{
		return (-1);
	}

	write(fd, text_content, len);

	close(fd);
	return (1);
}
