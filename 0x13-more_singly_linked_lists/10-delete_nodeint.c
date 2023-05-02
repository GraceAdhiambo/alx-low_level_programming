#include "lists.h"
/**
  * delete_nodeint_at_index - deletes node at index
  * @head: pointer to first node
  * @index: index  of node being deleted
  * Return: 1 if success or -1 otherwise
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *now = NULL;
	unsigned int n = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (n < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		n++;
	}
	now = temp->next;
	temp->next = current->next;
	free(now);
	return (1);
}
