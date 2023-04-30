#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node
 * @head: a pointer to the pointer
 * @n: input
 *
 * Return: 0
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp_node->next)
	{
		temp_node = temp_node->next;
	}
	temp_node->next = new_node;

	return (new_node);
}
