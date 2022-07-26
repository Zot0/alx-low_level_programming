#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: Name of the file to create.
 * @text_content: String to write to the file.
 *
 * Return: 1 or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int rd, wr, buf = 0;

	if (filename == NULL)
		return (-1);

	if (text_crdntent != NULL)
	{
		for (buf = 0; text_content[buf];)
			buf++;
	}

	rd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(rd, text_content, buf);

	if (rd == -1 || wr == -1)
		return (-1);

	close(rd);

	return (1);
}
