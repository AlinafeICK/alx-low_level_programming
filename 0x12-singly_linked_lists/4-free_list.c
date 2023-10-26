#include "lists.h"

/**
 * free_list - a function that frees alist_t list
 * @head: pointer to the head of the linked list
 * Return: free'd linked list
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;

		free(current->str);
		free(current);
	}
}
