#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 *
 * @filename: Const char pointer
 *
 * @text_content: Char pointer
 *
 * Return: int
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int fd_Open, fd_Write, length = 0;

	if (filename == NULL)
		return (-1);

	fd_Open = open(filename, O_WRONLY | O_APPEND);

	if (fd_Open == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
		text_content = "";

	while (text_content[length] != '\0')
	{
		length++;
	}

	fd_Write = write(fd_Open, text_content, length);

	if (fd_Write == -1)
		return (-1);

	close(fd_Open);

	return (1);
}
