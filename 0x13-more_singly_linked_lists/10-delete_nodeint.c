#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node at index of listint_t list
 * @head: double pointer to listhead
 * @index: index of node to delete from 0
 * Return: 1 if successfull and -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index && temp != NULL; i++)
	{
		prev = temp;
		temp = temp->next;
	}

	if (temp == NULL)
		return (-1);

	prev->next = temp->next;
	free(temp);

	return (1);
}
