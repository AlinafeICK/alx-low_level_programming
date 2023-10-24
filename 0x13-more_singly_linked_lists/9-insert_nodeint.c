#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new
 * node at a given position
 * @head: double pointer to head of linked list
 * @idx: unsigned int indicating position to insert new node
 * @n: int as the data for the new node
 * Return: New node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current = *head;
	listint_t *prev = NULL;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (i < idx)
	{
		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}
		prev = current;
		current = current->next;
		i++;
	}
	new_node->next = current;
	prev->next = new_node;
	return (new_node);
}
