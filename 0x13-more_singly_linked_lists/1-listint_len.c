#include "lists.h"

/**
 * listint_len - returns number of elements in linked listint_t list
 * @h: pointer to the list head
 * Return: number of elements within the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
