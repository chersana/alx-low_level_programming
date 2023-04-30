#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to the head of the linked list
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head)
	{
		current_node = head->next;
		free(head);
		head = current_node;
	}
}
