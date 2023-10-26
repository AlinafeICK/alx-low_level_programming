#include "lists.h"

/**
 * list_len - a function that returns the number of
 * elements in a linked list list_t
 * @h: pointer to head of the linked list
 * Return: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
