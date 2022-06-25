#include <stdio.h>

/**
 * main -Pprints all arguments it recieves
 * @argc: Number of arguments
 * @argv: Argument vector
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
