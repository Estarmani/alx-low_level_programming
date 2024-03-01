#include "lists.h"
/**
 * list_len - returns then number of elements in a list.
 * @h: pointer to the head.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);

	for (i = 1; h->next != NULL; i++)
		h = h->next;
	return (i);

}

