#include "main.h"
#include <stdio.h>

int closeError(int fd);
void readError(char *filename);
void writeError(char *filename);

/**
 * main - copies the content of a file to another file.
 * @argc: argument counter.
 * @argv: argument vector.
 * Return: always return 0, or exit.
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int _fd_file_from, _fd_file_to;
	ssize_t bytes_count = 1;

	/* check number of argument */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* open and check fd for file_from */
	_fd_file_from = open(argv[1], O_RDONLY);
	if (_fd_file_from < 0)
	{
		readError(argv[1]);
		exit(98);
	}
	/* open and check fd for file_to */
	_fd_file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (_fd_file_to < 0)
	{
		writeError(argv[2]);
		closeError(_fd_file_from);
		exit(99);
	}

	/* copy content - loop checks end of file (file_from) */
	while (bytes_count)
	{
		/* read the next 1020 bytes in file_from and check read error */
		bytes_count = read(_fd_file_from, buffer, 1024);
		if (bytes_count < 0)
		{
			readError(argv[1]);
			closeError(_fd_file_from);
			closeError(_fd_file_to);
			exit(98);
		}
		/* check buffer end of file */
		if (bytes_count == 0)
			break;
		/* write the output in file_to and check write error */
		bytes_count = write(_fd_file_to, buffer, bytes_count);
		if (bytes_count < 0)
		{
			writeError(argv[2]);
			closeError(_fd_file_from);
			closeError(_fd_file_to);
			exit(99);
		}
	}

	/* close and check fd for file_from and file_to */
	if (closeError(_fd_file_from) < 0)
	{
		closeError(_fd_file_to);
		exit(100);
	}
	if (closeError(_fd_file_to) < 0)
		exit(100);
	return (0);
}

/**
 * closeError - close a file descriptor and check for a possible error.
 * @fd: file descriptor for file to be closed.
 * Return: 1 if fd colud be closeed, -1 if fd could not be closed.
 */
int closeError(int fd)
{
	int _closeoutput;

	_closeoutput = close(fd);
	if (_closeoutput < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	return (_closeoutput);
}

/**
 * readError - print the read error.
 * @filename: filename.
 */
void readError(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
}

/**
 * writeError - print the write error.
 * @filename: filename.
 */
void writeError(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
}
