#include "main.h"
#include <stdio.h>

/**
 * error_manager - prints the message according to the output status
 * @argv: argument vector
 * @fd: file descriptor open
 * @status: exit status
 */
void error_manager(char **argv, int fd, int status)
{
	if (status == 97)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(status);
	else if (status == 98)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(status);
	else if (status == 99)
		dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(status);
	else if (status == 100)
		dprintf(2, "Error: Can't close fd %d\n", fd), exit(status);
}

/**
 * o_filefrom - open file_from for cp function
 * @filename: name of the file
 * @argv: argument vector
 *
 * Return: file on success, exit status on failure
 */
int o_filefrom(char *filename, char **argv)
{
	int file;

	file = open(filename, O_RDONLY);
	if (file == -1)
		error_manager(argv, 0, 98);
	return (file);
}

/**
 * o_fileto - open file_to for cp function
 * @filename: name of the file
 * @argv: argument vector
 *
 * Return: file on success, exit status on failure
 */
int  o_fileto(char *filename, char **argv)
{
	int file;

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if (file == -1)
		error_manager(argv, 0, 98);
	return (file);
}

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, exit status on failure
 */
int main(int argc, char **argv)
{
	int file_from = o_filefrom(argv[1], argv), file_to = o_fileto(argv[2], argv);
	int wr, rd;
	char buffer[1024];

	if (argc != 3)
		error_manager(argv, 0, 97);

	while ((rd = read(file_from, buffer, 1024)))
	{
		if (rd == -1)
			error_manager(argv, 0, 98);

		wr = write(file_to, buffer, rd);
		if (wr == -1)
			error_manager(argv, 0, 99);
	}

	if (close(file_from) == -1)
		error_manager(argv, file_from, 100);
	if (close(file_to) == -1)
		error_manager(argv, file_to, 100);

	return (0);
}
