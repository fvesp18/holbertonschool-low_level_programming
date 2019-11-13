#include "holberton.h"
/**
 * read_textfile - will read and print file in terminal
 * @filename: name of file
 * @letters: number of letters in file
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int count = 0;
	ssize_t writeme;
	char *buffer = malloc(sizeof(char) * letters);

	if (!buffer || !filename)
		return (0);

	fd = open(filename, O_RDONLY);
		if (fd == -1)
			return (0);

	count = read(fd, buffer, letters);
		if (count == -1)
			return (0);

	writeme = write(STDOUT_FILENO, buffer, count);
		if (writeme == -1)
			return (0);
	close(fd);
	free(buffer);

	return (count);
}
