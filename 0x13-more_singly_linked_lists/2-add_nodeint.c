#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds new node at start of listint_t list
 * @head: double pointer to list head
 * @n: value of new node
 * Return: address of new element or NULL for failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
