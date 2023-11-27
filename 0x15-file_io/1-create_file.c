#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content written in the file.
 *
 * Return: 1 if it succeeds, -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;        /* File descriptor for the created file */
	int nletters;  /* Number of letters in the text_content */
	int rwr;       /* Variable to store the result of write operation */

	if (!filename)
		return (-1);  /* Check for NULL filename, return -1 if invalid input */

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);  /* Open or create file with write-only mode */

	if (fd == -1)
		return (-1);  /* Return -1 if file opening or creation is unsuccessful */

	if (!text_content)
		text_content = "";  /* Set an empty string if text_content is NULL */

	for (nletters = 0; text_content[nletters]; nletters++)
		;  /* Calculate the number of letters in text_content */

	rwr = write(fd, text_content, nletters);  /* Write text_content to the file */

	if (rwr == -1)
		return (-1);  /* Return -1 if write operation fails */

	close(fd);  /* Close the file descriptor */

	return (1);  /* Return 1 to indicate success */
}
