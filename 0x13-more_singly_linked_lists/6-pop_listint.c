#include "lists.h"

/**
 * pop_listint - a function that deletes the
 * head node of linked list and returns the head
 * nodes data
 * @head: double pointer to the head of the linked list
 * Return: linked list with a deleted head node
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;


	if (head == NULL || *head == NULL)
	{
		return (data);
	}

	temp = *head;

	data = temp->n;

	*head = (*head)->next;

	free(temp);
	return (data);
}
