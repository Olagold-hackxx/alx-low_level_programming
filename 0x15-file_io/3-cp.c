#include "main.h"
#include <stdio.h>

/**
 * main - copy file content into another
 *
 * Return: 1 on success 100, 99, 98 and 97 on error
 */

int main(int ac, char **av)
{
	int fd_from, fd_to;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[0], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[0]);
		exit(98);
	}
	fd_to = open(av[1], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[1]);
		exit(99);
	}
	while (read(fd_from, buf, 1024))
	{
		write(fd_to, buf, 1024);
	}
	if (close(fd_from) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	close(fd_from);
	close(fd_to);
	return (1);
}
