#include "lists.h"
/**
 * add_nodeint_end - function that adds a node at the end
 * of the linked list
 * @head: pointer to the head
 * @n: int parameter
 * Return: a new node added at the end of the linked list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
	return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
	*head = new_node;
	}
	else
	{
	current = *head;
	while (current->next != NULL)
	{
	current = current->next;
	}
	current->next = new_node;
	}
	return (new_node);
}

