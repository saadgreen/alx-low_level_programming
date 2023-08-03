#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: listint_t
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}

	return (size);
}
