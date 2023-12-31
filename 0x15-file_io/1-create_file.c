#include "main.h"

/**
 * create_file - Creates a file with the specified name and writes
 * @filename: The name of the file to create
 * @text_content: The text content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_content;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		write_content = write(fd, text_content, strlen(text_content));
		if (write_content == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
