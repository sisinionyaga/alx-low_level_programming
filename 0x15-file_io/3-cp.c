#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if it fails (does not exist
 * or if the operation fails).
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd;        /* File descriptor for the opened file */
    int nletters;  /* Number of letters in the text_content */
    int rwr;       /* Variable to store the result of the write operation */

    if (!filename)
        return (-1);  /* Check for NULL filename, return -1 if invalid input */

    fd = open(filename, O_WRONLY | O_APPEND);  /* Open file with write-only and append mode */

    if (fd == -1)
        return (-1);  /* Return -1 if file opening fails */

    if (text_content)
    {
        for (nletters = 0; text_content[nletters]; nletters++)
            ;  /* Calculate the number of letters in text_content */

        rwr = write(fd, text_content, nletters);  /* Append text_content to the file */

        if (rwr == -1)
            return (-1);  /* Return -1 if the write operation fails */
    }

    close(fd);  /* Close the file descriptor */

    return (1);  /* Return 1 to indicate success */
}
