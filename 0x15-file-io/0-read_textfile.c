#include "holberton.h"
/**
 * read_textfile - will read and print file in terminal
 * @filename: name of file
 * @letters: number of letters in file
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (*filename)
		return (1);
	if (letters)
		return (0);

	return (0);
}
