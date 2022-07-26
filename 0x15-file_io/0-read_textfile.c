#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters to read and print.
 *
 * Return: Number of letters or 0 if NULL or fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	int rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);
	rd = open(filename, O_RDONLY);
	if (rd == -1)
		return (0);
	wr = write(STDOUT_FILENO, buffer, read(rd, buffer, letters));
	if (wr == -1)
		return (0);
	close(rd);
	free(buffer);
	return (wr);
}
