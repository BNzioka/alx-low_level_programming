#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees listint_t list and asets head to NULL
 * @head: double pointer to list head
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
