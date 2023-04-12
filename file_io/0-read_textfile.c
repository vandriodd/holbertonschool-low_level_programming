#include "main.h"

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: name of the file
 * @letters: number of letters
 *
 * Return: number of letters it could read and print,
 * 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fo, re, wr;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(letters);
	if (!buffer)
		return (0);

	fo = open(filename, O_RDWR);
	if (fo == -1)
		return (0);

	re = read(fo, buffer, letters);
	if (re == -1)
		return (0);

	wr = write(STDOUT_FILENO, buffer, re);
	if (wr == -1)
		return (0);

	if (close(fo) == -1)
		return (0);

	free(buffer);
	return (wr);
}
