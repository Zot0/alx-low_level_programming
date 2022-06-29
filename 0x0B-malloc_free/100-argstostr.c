#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 *@ac: number of arguments
 *@av: arguments
 * Return: a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int a;
	int b;
	char *d = NULL;
	int c;
	int n;

	c = 0;
	n = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			n++;
		}
	}

	d = (char *)malloc(n + ac + 1 * sizeof(char));
	if (d == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			d[c] = av[a][b];
			c++;
		}
		d[c] = '\n';
		c++;
	}
	d[c] = '\0';
	return (d);
}
