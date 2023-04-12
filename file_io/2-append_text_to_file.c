#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: content of the file
 *
 * Return: 1 on success,
 * -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fo, wr, len = 0;

	if (!filename)
		return (-1);

	fo = open(filename, O_RDWR | O_APPEND, 0600);
	if (fo == -1)
		return (-1);

	if (!text_content)
	{
		close(fo);
		return (1);
	}

	while (text_content[len])
		len++;

	wr = write(fo, text_content, len);
	if (wr == -1)
		return (-1);

	close(fo);
	return (1);
}
