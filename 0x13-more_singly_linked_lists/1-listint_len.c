#include "lists.h"
/**
 * listint_len - function that returns the number of elements
 * @h: pointer to the head of the linked list
 *
 * Return: 0
 */
size_t listint_len(const listint_t *h)
{
		size_t node_count = 0;

	while (h)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
