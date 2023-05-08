#include "main.h"

/**
 * read_textfile - reads a text file and prints it.
 *
 * @filename: const char type pointer to file to be read
 *
 * @letters: size_t type
 *
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t fp_Read, fp_Write, fp_Close;
	char *line_Buffer;

	if (filename == NULL)
		return (0);

	line_Buffer = malloc(sizeof(char) * letters);

	if (line_Buffer == NULL)
		return (-1);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	fp_Read = read(fp, line_Buffer, letters);

	if (fp_Read == -1)
		return (-1);

	fp_Write = write(STDOUT_FILENO, line_Buffer, fp_Read);

	if (fp_Write == -1)
		return (-1);
	fp_Close = close(fp);

	if (fp_Close == -1)
		return (-1);

	return (fp_Read);
}
