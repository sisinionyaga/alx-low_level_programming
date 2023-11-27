#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: number of letters to print.
 *
 * Return: number of letters printed. If it fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;        /* File descriptor for the opened file */
    ssize_t nrd, nwr;  /* Variables to store the number of bytes read and written */
    char *buf;      /* Buffer to store the content of the file */

    if (!filename)
        return (0);  /* Check for NULL filename, return 0 if invalid input */

    fd = open(filename, O_RDONLY);  /* Open the file in read-only mode */

    if (fd == -1)
        return (0);  /* Return 0 if file opening is unsuccessful */

    buf = malloc(sizeof(char) * letters);  /* Allocate memory for the buffer */

    if (!buf)
    {
        close(fd);
        return (0);  /* Return 0 if memory allocation fails */
    }

    nrd = read(fd, buf, letters);  /* Read up to 'letters' bytes from the file into the buffer */
    nwr = write(STDOUT_FILENO, buf, nrd);  /* Write the content of the buffer to standard output */

    close(fd);  /* Close the file descriptor */
    free(buf);  /* Free the allocated memory for the buffer */

    return (nwr);  /* Return the number of bytes written to standard output */
}
