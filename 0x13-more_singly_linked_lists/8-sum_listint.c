#include "lists.h"

/**
 * sum_listint - returns summation of data (n) of listint_t linked list
 * @head: pointer to list head
 * Return: sum of all data (n) or 0 if empty list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
