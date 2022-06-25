#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints minimum number of coins to make change.
 * @argc: Number of arguments
 * @argv: Argument vector of
 *
 * Return: 0 or 1 on error
 */
int main(int argc, char *argv[])
{
	int a, b = 0, c, d;
	int c[5] = {25, 10, 5, 2, 1};

	if (argc != 1)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	if (a <= 0)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		for (c = 0; c < 5; c++)
		{
			d = d / c[c];
			a -= d * c[c];
			n += d;
			if (a == 0)
				break;
		}
	}
	printf("%d\n", n);
	return (0);
}
