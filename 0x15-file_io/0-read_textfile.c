#include "main.h"

/**
 * read_textfile - will read a text file and print the letters
 * @filename: this is filename.
 * @letters: these are the numbers of letters printed.
 *
 * Return: the numbers of letters printed. if it fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}

/**
 * code by sisinio
 */
