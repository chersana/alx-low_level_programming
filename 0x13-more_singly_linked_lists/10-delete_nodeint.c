#include "lists.h"
/**
 * delete_nodeint_at_index -  function that deletes the node at index
 * @head: a pointer
 * @index: index of the node
 *
 * Return: 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = NULL;
	listint_t *prev = NULL;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}

	prev = *head;
	current = (*head)->next;

	while (current && i < index - 1)
	{
		prev = current;
		current = current->next;
		i++;
	}

	if (!current)
	{
		return (-1);
	}
	prev->next = current->next;
	free(current);

	return (1);
}
