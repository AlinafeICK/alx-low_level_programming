#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * in a linked list
 * @h: pointer to head of the linked list
 * Return: number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t node_counter = 0;

	while (h != NULL)
	{
		h = h->next;
		node_counter++;
	}
	return (node_counter);
}
