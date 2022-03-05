#include "main.h"

/**
 * create_file - create a file or truncate if exist
 * @filename: name of file
 * @text_content: content to be added or truncated
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t writeLength;

	fd = open(filename, O_CREAT| O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	writeLength = write(fd, text_content, strlen(text_content) + 1);
	if (!filename | (writeLength == -1))
		return (-1);
	return (1);
}
