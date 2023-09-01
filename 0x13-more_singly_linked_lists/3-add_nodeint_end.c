#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds new node at the appex of listint_t list
 * @head: double pointer to list end
 * @n: new node value
 * Return: address of new element or NULL in case it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}
