#include <stdio.h>
#include "lists.h"

/**
 * list_len - Number of elements in a linked list_t list
 * @h: Elements in a linked list_t list
 * Return: The number of nodes
 */
size_t list_len(const list_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{

		i++;
		h = h->next;
	}
	return (i);

}
