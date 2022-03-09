#include "main.h"
#include <stdio.h>

/**
 * error_handler - handles error in program
 * @file_from: return value of file copying from
 * @file_to: return value of file copying to
 * @av: args passed
 * Return: void
 */

void error_handler(int file_from, int file_to, char **av)
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
}

/**
 * main - copy file content into another
 * @ac: number of arguments
 * @av: args passed
 * Return: 0 on success 100, 99, 98 and 97 on error
 */

int main(int ac, char **av)
{
	int fd_from, fd_to;
	char buf[1024];
	ssize_t writeLength, readLength;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		error_handler(fd_from, 0, av);
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		error_handler(0, fd_to, av);;
	readLength = 1024;
	while (readLength == 1024)
	{
		readLength = read(fd_from, buf, 1024);
		if (!av[1] | (readLength == -1))
			error_handler(-1, 0, av);
		writeLength = write(fd_to, buf, readLength);
		if (writeLength == -1)
			error_handler(0, -1, av);
	}
	if (close(fd_from) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	return (0);
}
