#include "main.h"

/**
 * read_textfile - read text file and print to stdout
 * @filename: name of file
 * @letters: no of letters given to the file to hold
 * Return: no of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t readLength, writeLength;

	fd = open(filename, O_RDONLY);
	if (!filename | (fd == -1))
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	readLength = read(fd, buf, letters);
	writeLength = write(STDOUT_FILENO, buf, readLength);
	if ((writeLength == -1) | (writeLength != readLength))
		return (0);
	close(fd);
	return (writeLength);
}

