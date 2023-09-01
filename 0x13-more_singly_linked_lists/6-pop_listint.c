#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes head node of listint_t linked list
 * @head: double pinter to list head
 * Return: data of the heead ode (n) or ) if empty list
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
