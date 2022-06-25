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
	int a, b = 0, d, e;
	int c[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
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
		for (d = 0; d < 5; d++)
		{
			e = a / c[d];
			a -= e * c[d];
			b += e;
			if (a == 0)
				break;
		}
	}
	printf("%d\n", b);
	return (0);
}
