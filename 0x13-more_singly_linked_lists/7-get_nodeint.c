#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: pointer to first node
 * @index: index of node
 *
 * Return: 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current_node = head;

	while (current_node && i < index)
	{
		current_node = current_node->next;
		i++;
	}

	return (current_node ? current_node : NULL);
}
