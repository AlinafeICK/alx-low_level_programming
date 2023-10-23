#include "lists.h"

/**
 * print_listint - function that prints all elements
 * of a listint_t list
 * @h: function argument
 * Return: Contents of given list
 */
size_t print_listint(const listint_t *h)
{
	size_t node_counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_counter++;
	}
	return (node_counter);
}
