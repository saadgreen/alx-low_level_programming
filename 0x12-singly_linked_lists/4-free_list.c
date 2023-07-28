#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: list_t
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *cnode;

	while ((cnode = head) != NULL)
	{
		head = head->next;
		free(cnode->str);
		free(cnode);
	}
}
