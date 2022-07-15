#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: First element of the list
 * Return: Void
 */
void free_list(list_t *head)
{
	struct list_s *temp = NULL;
	struct list_s *aux =  NULL;

	temp = head;
	while (temp != NULL)
	{
		aux = temp->next;
		free(temp->str);
		free(temp);
		temp = aux;
	}
	head = NULL;
}
