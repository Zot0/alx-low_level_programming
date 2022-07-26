#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Copy the content of a file to another file.
 * @argc: Number of arguments.
 * @argv: Arguments
 * Return: 0 (Succes)
 */

int main(int argc, char *argv[])
{
	int op, op2, wr;
	ssize_t rd = 1024;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	op = open(argv[1], O_RDONLY);
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	op2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (op2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99); }
	while (rd == 1024)
	{
		rd = read(op, buffer, 1024);
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98); }
		wr = write(op2, buffer, rd);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99); }}
	if (close(op) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close op %d\n", op);
		exit(100); }
	if (close(op2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close op %d\n", op2);
		exit(100); }
	return (0);
}
