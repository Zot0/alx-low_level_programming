#include "main.h"
#include <stdlib.h>

/**
 * create_file - Creates a file.
 * @filename: Name of the file to create.
 * @text_content: String to write to the file.
 *
 * Return: 1 or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{

	int rd, wr, a;
	char *buffer;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		rd = open(filename, O_CREAT, 0600);
		if (rd == -1)
			return (-1);
		return (1);
	}
	for (a = 0; text_content[a] != '\0'; a++)
		;
	buffer = malloc(a * sizeof(char));
	if (buffer == NULL)
		return (-1);
	rd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (rd == -1)
		return (-1);
	wr = write(rd, text_content, a);
	if (wr == -1)
		return (-1);
	close(rd);
	free(buffer);
	return (1);


}
