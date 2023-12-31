#include "lists.h"

/**
 * print_list - a function that prints all the elements
 * of a list_t list
 * @h: pointer to the head of the linked list
 * Return: prints all elements of the linked list list_t
 */
size_t print_list(const list_t *h)
{
	size_t node_counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		node_counter++;
	}
	return (node_counter);
}
