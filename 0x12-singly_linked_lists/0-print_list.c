#include <stdio.h>
#include "lists.h"

/**
 * main - Prints all the elements of a list_t list
 * @h: Elements of a list_t list
 *
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			h = h->next;
			i++;
		} else
		{
		printf("[%d] %s", h->len, h->str);
		i++;
		h = h->next;
		printf("\n");
		}
	}
	return (i);
}
