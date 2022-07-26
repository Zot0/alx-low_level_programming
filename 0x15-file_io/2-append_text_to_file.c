#include"main.h"
#include <stdlib.h>

/**
 *append_text_to_file - Appends text at the end of a file
 *@filename: Name of the file.
 *@text_content: String to add to the end of the file.
 *
 *Return: 1 or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{

	int rd, wr, a;
	char *buffer;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (a = 0; text_content[a] != '\0'; a++)
		;
	buffer = malloc(a * sizeof(char));
	if (buffer == NULL)
		return (-1);
	rd = open(filename, O_RDWR | O_APPEND);
	if (rd == -1)
		return (-1);
	wr = write(rd, text_content, a);
	if (wr == -1)
		return (-1);
	close(rd);
	free(buffer);
	return (1);
}
