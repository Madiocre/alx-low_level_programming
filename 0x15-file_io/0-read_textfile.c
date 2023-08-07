#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 *
 * Return: The actual number of letters read and printed, or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_content;
	ssize_t write_content;
	char *buffer;


	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	read_content = read(fd, buffer, letters);
	if (read_content == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	buffer[read_content] = '\0';

	write_content = write(STDOUT_FILENO, buffer, read_content);
	if (write_content != read_content)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);

	return (write_content);
}
