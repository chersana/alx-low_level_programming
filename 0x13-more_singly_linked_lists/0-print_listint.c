#include "lists.h"
/**
 * print_listint - function that prints all the elements
 * @h: pointer to the head of the linked list
 *
 * Return: 0
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}

	return (node_count);
}
