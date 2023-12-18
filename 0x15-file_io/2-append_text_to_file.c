#include "main.h"

/**
 * append_text_to_file - this will append my text at the end of a file
 * @filename: this is for filename.
 * @text_content: this is for the added content.
 *
 * Return: will return 1 if the file exists. and -1 if file does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(fd, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}

/**
 * Sisinio file
 */
