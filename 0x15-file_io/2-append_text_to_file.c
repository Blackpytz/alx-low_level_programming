#include "main.h"

/**
* append_text_to_file - function that appends text at the end of a file
* @filename: name of the file
* @text_content: string to add at the end of the file
*
* Return: 1 on succes and -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;

	if (!filename)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	len = strlen(text_content);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	write(fd, text_content, len);

	close(fd);
	return (1);
}
