#include "lists.h"

/**
 * free_listint - a function that frees a linked list
 * @head: pointer to the head of the linked list
 * Return: free'd linked list
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
