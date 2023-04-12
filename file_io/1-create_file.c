#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: the content of the file
 *
 * Return: 1 on success,
 * -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fo, wr, len = 0;

	if (!filename)
		return (-1);

	fo = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fo == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
	}

	wr = write(fo, text_content, len);
	if (wr == -1)
		return (-1);

	close(fo);
	return (1);
}
