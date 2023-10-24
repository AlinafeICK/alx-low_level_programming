#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: takes double pointer to the head of a linked list
 * Return: frees the memory allocated
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
