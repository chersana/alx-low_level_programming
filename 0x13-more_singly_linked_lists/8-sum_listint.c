#include "lists.h"
/**
 * sum_listint -  function that returns the sum of all the data n
 * @head: a pointer
 *
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current_node = head;

	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}

	return (sum);
}
