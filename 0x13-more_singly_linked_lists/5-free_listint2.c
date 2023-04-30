#include "lists.h"
/**
 * free_listint2 -  function that frees a listint_t list
 * @head: pointer to head of linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		current_node = (*head)->next;
		free(*head);
		*head = current_node;
	}

	*head = NULL;
}
