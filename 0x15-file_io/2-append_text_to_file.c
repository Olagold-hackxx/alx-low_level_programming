#include "main.h"

/*
 * append_text_to_file - append text to file
 * @filename: file name
 * @text_content: text content
 * Return: 1 on success -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t writeLength;
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	writeLength = write(fd, text_content, strlen(text_content) + 1);
	if (!filename | (writeLength == -1))
		return (-1);
	return (1);
}
